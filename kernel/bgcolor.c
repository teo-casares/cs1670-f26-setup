#include "types.h"
#include "utils.h"

/* BGR pixel at 0x0e0000: Ducati red RGB #CC0000 -> 0x00BBGGRR */
uint32 __attribute__((section(".bgcolor"))) bgcolor = 0x000000CC;
