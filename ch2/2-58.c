#include <stdio.h>
#include <stdbool.h>
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



bool is_little_endian()
{
    int i = 1;
    int first_byte = *((byte_pointer)&i);
    printf("first_byte: %d\n", first_byte);
    return first_byte == 1;
}

int main()
{
    bool is_little = is_little_endian();
    printf("is_little: %d\n", is_little);
    return 0;
}
