#include <stdio.h>

int func(int x, int y)
{
    printf("Input x: %x, y: %x\n", x, y);
    int x1 = x & 0xff;
    int y1 = y & (~0xff);
    printf("Input x1: %x, y1: %x\n", x1, y1);
    return x1 | y1;
}

int main()
{
    int res = func(0x89ABCDEF, 0x76543210);
    printf("res: %x\n", res);
    return 0;
}
