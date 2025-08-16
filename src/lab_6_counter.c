#include <stdio.h>

int fun_increment(int param_increment, int *param_ptr_counter);

int main(void)
{
    int int_counter;
    printf("Value of int_counter after initialization: %d.\n",
            int_counter);
    printf("Address of int_counter: %p.\n",
            &int_counter);
    printf("Value of int_counter returned by increment_function: %d.\n",
            fun_increment(1, &int_counter));
    printf("Value of int_counter after call to increment_function: %d.\n",
            int_counter);
    printf("Value of int_counter returned by increment_function: %d.\n",
            fun_increment(1, &int_counter));
    printf("Value of int_counter after call to increment_function: %d.\n",
            int_counter);
    printf("Value of int_counter returned by increment_function: %d.\n",
            fun_increment(1, &int_counter));
    printf("Value of int_counter after call to increment_function: %d.\n",
            int_counter);
}

int fun_increment(int param_increment, int *param_ptr_counter)
{
    printf("Pointer parameter value of counter: %p.\n",
            param_ptr_counter);
    return *param_ptr_counter += param_increment;
}
