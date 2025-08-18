#include <stdio.h>

int fun_sum(int param_a, int param_b);
int fun_factorial(unsigned int param_n);

int main()
{
    int (*ptr_fun_sum)(int, int);
    int (*ptr_fun_factorial)(unsigned int);
    ptr_fun_sum = &fun_sum;
    ptr_fun_factorial = &fun_factorial; // Trying 2 functions to see how many bytes are allocated for their pointers
    printf("Address of fun_sum: %lX. Adding 1: %lX.\n",
            *ptr_fun_sum, *ptr_fun_sum + 1);
    printf("Address of fun_factorial: %lX. Adding 1: %lX.\n",
            *ptr_fun_factorial, *ptr_fun_factorial + 1);
    printf("Factorial of 4: %d.\n",
            (*ptr_fun_factorial)(4));
}

int fun_sum(int param_a, int param_b)
{
    return param_a + param_b;
}

int fun_factorial(unsigned int param_n)
{
    if (param_n == 0) return 0;
    else {
        return param_n + fun_factorial(param_n - 1);
    }
}
