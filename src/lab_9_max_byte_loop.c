#include <stdio.h>

unsigned char fun_max_byte(char *param_ptr_num, int param_size)
{
    unsigned char chr_max = 0x00;
    unsigned char chr_curr = 0x00;
    for (int i = 0; i < param_size; i++) {
        printf("Current byte address: 0x%lX.\n",
                param_ptr_num + i);
        chr_curr = *(param_ptr_num + i) & 0xFF;
        printf("Current byte: 0x%1X.\n",
                chr_curr);

        printf("Current max: 0x%1X.\n",
                chr_max);
        if (chr_curr > chr_max) chr_max = chr_curr;
    }
    return chr_max;
}
int main(int argc, char *argv[])
{
    int int_num = argc > 1 ? atoi(argv[1]) : 3405695742;
    long long int_addr_num = (long long)&int_num;
    char *ptr_num = (long long *)int_addr_num;
    printf("Address of int_num: 0x%lX.\n",
            &int_num);
    printf("Address stored in int_addr_num: 0x%lX.\n",
            int_addr_num);
    printf("Value stored in int_num: 0x%lX.\n",
            int_num);
    printf("The max byte: 0x%02X.\n",
            fun_max_byte(ptr_num, sizeof(int_num)));
}
