#include <stdio.h>
#define ABS(x) (x ^ 0xFFFFFFFF) + 1

int main(void)
{
    int int_neg = -5;
    printf("Original value: %d.\n", int_neg);
    printf("After applying macro: %d.\n", ABS(int_neg));
}
