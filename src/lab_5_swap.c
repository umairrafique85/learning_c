#include <stdio.h>

void swap(int *ptr_a, int *ptr_b);

int main(void)
{
    int int_a = 5;
    int int_b = 10;

    printf("Original values: a = %d, b = %d.\n", int_a, int_b);
    printf("Their addresses: a = %p, b = %p.\n", &int_a, &int_b);
    swap(&int_a, &int_b);
    printf("New values: a = %d, b = %d.\n", int_a, int_b);
}

void swap(int *ptr_a, int *ptr_b)
{
    printf("addresses of parameters: 0x%lx, 0x%lx.\n", &ptr_a, &ptr_b);
    printf("values of parameters: 0x%lx, 0x%lx.\n", ptr_a, ptr_b);
    printf("parameters dereferenced: 0x%lx, 0x%lx.\n", *ptr_a, *ptr_b);
    int tmp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = tmp;
    printf("AFTER SWAP.\n");
    printf("addresses of parameters: 0x%lx, 0x%lx.\n", &ptr_a, &ptr_b);
    printf("values of parameters: 0x%lx, 0x%lx.\n", ptr_a, ptr_b);
    printf("parameters dereferenced: 0x%lx, 0x%lx.\n", *ptr_a, *ptr_b);
    return;
}
