#include <stdio.h>

int replace_byte(int x, int pos, int val)
{
   int x1 = x & (~(0xff << (pos * 8)));
   int mask = val << (pos * 8);
    return x1 | mask;
}

int main()
{
    int res = replace_byte(0x89ABCDEF, 1, 0x12);
    printf("res: %x\n", res);
    int res2 = replace_byte(0x12345678, 2, 0xAB);
    printf("res2: %x\n", res2);
    int res3 = replace_byte(0x12345678, 0, 0xAB);
    printf("res3: %x\n", res3);
    return 0;
}
