#include <stdio.h>
// get  most significant  byte  of  an  integer
int get_msb(int x)
{
    // 三个字节
    int shift_val = (sizeof(int) - 1) << 3;
    printf("shift_val: %d\n", shift_val);
    // right shift 3 bytes length
    int xright = x >> shift_val;
    printf("xright: %d\n", xright);
    // get most significant byte
    return xright & 0xff;
}

int main()
{
    int x = 0xffffffff;
    int msb = get_msb(x);
    printf("msb: %d\n", msb);
    return 0;
}
