#include "scanCode.h"

#define NS(X) kernel_keyboard_scanCode_ ## X
#define CODE_SET_SIZE 256

// index represents the scan code
static kernel_keyboard_key_Key codeSet2[CODE_SET_SIZE] = {
        // TODO implement codeset 2
        //{.keyCode = 'A', .pressed = true},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {'\t', 1},
        {'`',  1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {'q',  1},
        {'1',  1},
        {0,    1},
        {0,    1},
        {0,    1},
        {'z',  1},
        {'s',  1},
        {'a',  1},
        {'w',  1},
        {'2',  1},
        {0,    1},
        {0,    1},
        {'c',  1},
        {'x',  1},
        {'d',  1},
        {'e',  1},
        {'4',  1},
        {'3',  1},
        {0,    1},
        {0,    1},
        {' ',  1},
        {'v',  1},
        {'f',  1},
        {'t',  1},
        {'r',  1},
        {'5',  1},
        {0,    1},
        {0,    1},
        {'n',  1},
        {'b',  1},
        {'h',  1},
        {'g',  1},
        {'y',  1},
        {'6',  1},
        {0,    1},
        {0,    1},
        {0,    1},
        {'m',  1},
        {'j',  1},
        {'u',  1},
        {'7',  1},
        {'8',  1},
        {0,    1},
        {0,    1},
        {',',  1},
        {'k',  1},
        {'i',  1},
        {'o',  1}, //letter O
        {'0',  1}, //number zero
        {'9',  1},
        {0,    1},
        {0,    1},
        {'.',  1},
        {'/',  1},
        {'l',  1},
        {';',  1},
        {'p',  1},
        {'-',  1},
        {0,    1},
        {0,    1},
        {0,    1},
        {'\'', 1},
        {0,    1},
        {'[',  1},
        {'=',  1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {'\n', 1},
        {']',  1},
        {0,    1},
        {'\\', 1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {'\b', 1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1},
        {0,    1}
};

kernel_keyboard_key_Key NS(toKey)(uint8_t scanCode) {
    return codeSet2[scanCode];
}
