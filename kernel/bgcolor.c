#include "types.h"
#include "utils.h"

/* BGR pixel at 0x0e0000: Omarchy Lumon background RGB #16242d */
uint32 __attribute__((section(".bgcolor"))) bgcolor = 0x002D2416;
