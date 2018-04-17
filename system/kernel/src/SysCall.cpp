#include <myos/kernel/SysCall.hpp>
#include <myos/kernel/cpu/CPU.hpp>
#include <myos/kernel/Kernel.hpp>

namespace myos::kernel {

SysCall::SysCall(drivers::VGAScreen &vgaScreen)
        : handler(vgaScreen) {
    Kernel::getCurrentKernel().getCPU().registerInterruptHandler(
            cpu::InterruptType::SYSTEM_CALL, &handler);
}

void SysCall::InterruptHandlerImpl::handleInterrupt(
        cpu::InterruptType interrupt,
        cpu::RegisterState &registerState) {
    if (interrupt != cpu::InterruptType::SYSTEM_CALL) {
        return;
    }
    uint32_t ret = runSysCall(registerState.eax, registerState.ebx, registerState.ecx, registerState.edx);
    registerState.eax = ret;
}

uint32_t SysCall::InterruptHandlerImpl::runSysCall(
        uint32_t id,
        uint32_t arg1,
        uint32_t arg2,
        uint32_t arg3) {
    uint32_t ret = 0xFFFFFFFF;
    switch (id) {
        case 0:
            if (vgaScreen.setChar(arg1, arg2, static_cast<char>(arg3)))
                ret = 0;
            else
                ret = 1;
            break;
        default:
            break;
    }
    return ret;
}

SysCall::InterruptHandlerImpl::InterruptHandlerImpl(drivers::VGAScreen &vgaScreen)
        : vgaScreen(vgaScreen) {}

}
