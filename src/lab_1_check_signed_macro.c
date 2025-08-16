#include <stdio.h>

#define IS_UNSIGNED(x) ( (x = -1), (x > 0) )

int main(void) {
    int a;
    unsigned int b;
    printf("a (declared as int) is unsigned: %b.\n", IS_UNSIGNED(a));
    printf("b (declared as unsigned int) is unsigned: %b.\n", IS_UNSIGNED(b));
    printf("a (declared as int) is unsigned: %b.\n", a > 0);
    printf("b (declared as unsigned int) is unsigned: %b.\n", b > 0);
}
