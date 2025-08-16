#include <stdio.h>

int glb_int_counter;

int fun_increment(int param_increment);

int main(void)
{
    printf("Value of glb_int_counter after initialization: %d.\n",
            glb_int_counter);
    printf("Value of glb_int_counter returned by increment_function: %d.\n",
            fun_increment(1));
    printf("Value of glb_int_counter after call to increment_function: %d.\n",
            glb_int_counter);
    printf("Value of glb_int_counter returned by increment_function: %d.\n",
            fun_increment(1));
    printf("Value of glb_int_counter after call to increment_function: %d.\n",
            glb_int_counter);
    printf("Value of glb_int_counter returned by increment_function: %d.\n",
            fun_increment(1));
    printf("Value of glb_int_counter after call to increment_function: %d.\n",
            glb_int_counter);
}

int fun_increment(int param_increment)
{
    return glb_int_counter += param_increment;
}
