#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; ++i)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    // printf(&x);
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x, sizeof(void *));
}

void test_show_bytes()
{


    int i = 1;
    float f = 1;
    void *p = &i;
    show_int(i);
    show_float(f);
    show_pointer(p);
}
int main()
{
    test_show_bytes();
    return 0;
}