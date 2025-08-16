#include <stdio.h>
#include <stdlib.h>

void modify_msbs(unsigned int *param_int_2_modify, short param_val_2_use);

int main(int argc, char *argv[])
{
    int int_var_2_modify = argc > 1 ? atoi(argv[1]) : 0xDEADBEEF;
    printf("Original value of variable: 0x%X.\n",
            int_var_2_modify);
    modify_msbs(&int_var_2_modify, 0xFFFF); // change 2 MSB's to 0xFFFF
    printf("New value of variable: 0x%X.\n",
            int_var_2_modify);
}

void modify_msbs(unsigned int *param_int_2_modify, short param_val_2_use)
{
    *param_int_2_modify = *param_int_2_modify | (param_val_2_use << 16);
}
