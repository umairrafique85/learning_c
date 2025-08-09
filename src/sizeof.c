#include <stdio.h>

#define size_of_var(var) (int)(&var + 1) - (int)&var
/*
#define size_of_type(type) type a;\
    size_of_var(a)
*/
#define size_of_type(type) (type*)0 + 1
// create macro size_of_type, takes arguments like int, char etc.
// create macro size_of_var, takes argument as a variable
int main() {
    int int_a;
    printf("Using size of var: %ld.\n", size_of_var(int_a));
    printf("Using size of type: %ld.\n", size_of_type(long));
}
