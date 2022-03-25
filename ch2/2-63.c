#include <assert.h>
#include <stdio.h>
// 用算数右移完成逻辑右移
unsigned srl(unsigned x, int k)
{
    unsigned xsra = (int) x >> k;
    unsigned bits_width = sizeof(int) * 8;
    unsigned left_bits = bits_width - k;
    unsigned mask = (-1 << left_bits);
    return xsra & ~mask;
}


// 用逻辑右移完成算数右移
int sra(int x, int k)
{
    int xsrl = (unsigned) x >> k;
    int w = sizeof(int) << 3;
    int mask = (int) -1 << (w - k);
    int m = 1 << (w - 1);
    // 這行代碼的神奇之处在于：
    // !(x&m)的结果， 如果x是负数，那么x&m的结果是1，
    // 如果x是正数，那么x&m的结果是0，
    mask &= !(x & m) - 1;
    return xsrl | mask;
}
int main()
{
    int res = srl(0x80000000, 1);
    assert(res == 0x40000000);
    int res2 = srl(0xFF000000, 8);
    assert(res2 == 0x00FF0000);
    unsigned x = 0xff000000;
    printf("%u\n", x);
    printf("%u / 2\n", x >> 1);
    printf("%d\n", (int) x);
}