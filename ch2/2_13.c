#include <stdio.h>

int bis(int x, int m);
int bic(int x, int m);

int bis(int x, int m)
{
    return x | m;
}

int bic(int x, int m)
{
    return x & ~m;
}

int bool_or(int x, int y)
{
    return bis(x, y);
}

int bool_xor(int x, int y)
{
    return bic(bis(x, y), bic(x, y));
}

int main()
{
}