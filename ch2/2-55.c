#include <stdio.h>
typedef char* byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; ++i)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}
int main()
{
    // test int
    int i = 1;
    show_bytes((byte_pointer)&i, sizeof(int));
    // test double
    double d = 1.0;
    printf("sizeof(double): %lu\n", sizeof(double));
    show_bytes((byte_pointer)&d, sizeof(double));
}
