#include <stdint.h>
#include <stdio.h>

void fun_swap_ptrs(uint32_t *param_ptr_a, uint32_t *param_ptr_b);

int main(void)
{
    uint32_t var_a = 5;
    uint32_t var_b = 10;
    uint32_t *ptr_var_a = &var_a;
    uint32_t *ptr_var_b = &var_b;

    printf("[main] Value of var_a: %d, value of var_b: %d.\n",
            var_a, var_b);
    printf("[main] Address of var_a: %lX, address of var_b: %lX.\n",
            ptr_var_a, ptr_var_b);
    fun_swap_ptrs(&ptr_var_a, &ptr_var_b);
    printf("[main] After swapping: \n");
    printf("[main] Value of var_a: %d, value of var_b: %d.\n",
            var_a, var_b);
    printf("[main] Address of var_a: %lX, address of var_b: %lX.\n",
            ptr_var_a, ptr_var_b);
}

void fun_swap_ptrs(uint32_t *param_ptr_a, uint32_t *param_ptr_b)
{
    uint64_t tmp = *param_ptr_a;
    printf("[fun_swap_ptrs] Values received: %lX, %lX.\n",
            param_ptr_a, param_ptr_b);
    printf("[fun_swap_ptrs] Values at those addresses: %lX, %lX.\n",
            *param_ptr_a, *param_ptr_b);
    printf("[fun_swap_ptrs] Value of ptr_temp: %lX. Value at the address: %lX.\n",
            tmp, (uint32_t*)tmp);
    *param_ptr_a = *param_ptr_b;
    *param_ptr_b = (uint32_t*)tmp;
}
