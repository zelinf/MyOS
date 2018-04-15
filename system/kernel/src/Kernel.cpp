#include <myos/kernel/Kernel.hpp>

namespace myos::kernel {

Kernel *Kernel::currentKernel = nullptr;

Kernel::Kernel() : sysCall(*this) {
    if (currentKernel == nullptr) {
        heap = reinterpret_cast<uint8_t *>(0x120000);

        // TODO Do necessary initialization
        currentKernel = this;
    }
}

Kernel::~Kernel() {
    currentKernel = nullptr;
}

Kernel &Kernel::getCurrentKernel() {
    return *currentKernel;
}

bool Kernel::isRunning() {
    return currentKernel != nullptr;
}

}

extern "C" void __cxa_pure_virtual() {
    // No op
}

namespace {

class Dumb {
public:
    Dumb() {
        asm volatile("nop");
    }
};

// So that we can make sure .init_array section exists.
Dumb dumb;

}

extern "C" uint32_t __init_array_start;

extern "C" {

int c_main() {
    extern int main();
    auto ctor = reinterpret_cast<void (*)()>(__init_array_start);
    ctor();
    return main();
}

void *__dso_handle;

int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso) {
    return 0;
}

void __cxa_finalize(void *f) {

}

}
