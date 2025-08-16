#include <stdio.h>

unsigned int fun_switch_endianness(unsigned int prm_uint_x);
unsigned int uint_result;

int main(void)
{
    unsigned int uint_a = 0x11223344;
    printf("Original value in dec: %d. Same in hex: 0x%X.\n", uint_a, uint_a);
    uint_result = fun_switch_endianness(uint_a);
    printf("After switching: 0x%X.\n", uint_result);
}

unsigned int fun_switch_endianness(unsigned int prm_uint_x)
{
    // unsigned int stage_1, stage_2, stage_3;
    return prm_uint_x << (3 * 8) |
        (prm_uint_x & 0x0000FF00) << 8 |
        (prm_uint_x & 0x00FF0000) >> 8 |
        (prm_uint_x >> (3 * 8));
}
