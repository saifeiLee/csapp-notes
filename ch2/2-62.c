#include <stdio.h>
#include <assert.h>

int int_shifts_are_arithmetic()
{
    int i = -1;
    return !((i >> 1) ^ i);
}

int main()
{
    assert(int_shifts_are_arithmetic());
    return 0;
}