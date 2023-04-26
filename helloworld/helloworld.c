#include "config.h"

int main()
{
    *mmioaddr32(0x000) = 0xfabedd1e;
    *mmioaddr32(0x004) = 0x00000001;
    *mmioaddr32(0x008) = 0x00000002;
    *mmioaddr32(0x00c) = 0x00000003;
    *mmioaddr32(0x010) = 0x00000004;
    *mmioaddr32(0x014) = 0x00000005;
    *mmioaddr32(0x018) = 0x00000006;
    *mmioaddr32(0x01c) = 0x00000007;
    *mmioaddr32(0x020) = 0x00000008;
    *mmioaddr32(0x024) = 0x00000009;
    *mmioaddr32(0x028) = 0x0000000a;
    *mmioaddr32(0x02c) = 0x0000000b;
    *mmioaddr32(0x030) = 0x0000000c;
    *mmioaddr32(0x034) = 0x0000000d;
    *mmioaddr32(0x038) = 0x0000000e;
    *mmioaddr32(0x03c) = 0x0000000f; 
    *simendaddr32(0x000) = 0xdeadbeef; 
    return 0;
}

unsigned long __stack_chk_guard;
void __stack_chk_guard_setup(void)
{
     __stack_chk_guard = 0xBAAAAAAD;//provide some magic numbers
}

void __stack_chk_fail(void)                         
{
 /* Error message */                                 
 printf("Error: Stack Overflow Detected!");
}// will be called when guard variable is corrupted
