#include <stdio.h>
#include <stdlib.h>

void fun_print_binary(unsigned int param_num)
{
    printf("Binary representation: %0b.\n",
            param_num);
}
int main(int argc, char *argv[])
{
    unsigned int uint_num = argc > 1 ? atoi(argv[1]) : 75;
    printf("Argument received: %u.\n",
            uint_num);
    fun_print_binary(uint_num);
}
