#include <stdio.h>

float sum_elements(float nums[], unsigned length)
{
    int i;
    float result = 0;
    for (i = 0; i < length; i++)
    {
        result += nums[i];
    }
    return result;
}

int main()
{
    float nums[0] = {};
    int res = sum_elements(nums, 0);
    printf("%d\n", res);
    return 0;
}