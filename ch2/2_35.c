#include <stdio.h>
int tmult_ok(int x, int y)
{
    int p = x * y;
    return !x || p / x == y;
}

int main()
{
    int a = __INT_MAX__;
    int b = __INT_MAX__;
    int res = tmult_ok(a, b);
    printf("%d\n", res);
}
