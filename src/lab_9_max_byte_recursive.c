#include <stdio.h>
#include <stdlib.h>

unsigned char fun_max_byte_int(unsigned int param_num); // Takes int, breaks into pointer for 4 chars, runs recursive max function on each
unsigned char fun_max_byte_recursive(
    unsigned char *param_ptr_curr, int param_i, int param_size, unsigned char param_max
); // recursive max function of byte pointers


int main(int argc, char *argv[])
{
    unsigned int int_num = argc > 1 ? atoi(argv[1]) : 3203391149;
    printf("[main] input number: %u. In hex: 0x%X.\n",
            int_num, int_num);
    printf("[main] max byte: %X.\n",
            fun_max_byte_int(int_num));
}

unsigned char fun_max_byte_int(unsigned int param_num)
{
    unsigned char chr_max = 0;
    unsigned char chr_curr = 0;
    int i = 0;
    printf("[fun_max_byte_int] received: %X. Address: %p.\n",
            param_num, &param_num);
    return fun_max_byte_recursive(&param_num, i, sizeof(param_num), chr_max);
}
unsigned char fun_max_byte_recursive(
    unsigned char *param_ptr_curr, int param_i, int param_size, unsigned char param_max
)
{
    printf("[fun_max_byte_recursive] received pointer: %p.\n",
            param_ptr_curr);
    printf("[fun_max_byte_recursive] value at pointer: %X.\n",
            *(param_ptr_curr + param_i));
    printf("[fun_max_byte_recursive] received max: %X.\n",
            param_max);
    if (param_i >= param_size) return param_max;
    else {
        if (*(param_ptr_curr + param_i) > param_max) {
            return fun_max_byte_recursive(param_ptr_curr+param_i+1, param_i+1, param_size, *(param_ptr_curr + param_i));
        } else {
            return fun_max_byte_recursive(param_ptr_curr+param_i+1, param_i+1, param_size, param_max);
        }
    }
}
