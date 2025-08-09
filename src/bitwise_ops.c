#include <stdio.h>

char chr_a = 0b01010101;
unsigned char chr_a_ord;
unsigned char chr_a_and;
unsigned char chr_a_xord;
char fun_set_ith_bit(char param_target, char i);
char fun_unset_ith_bit(char param_target, char i);
char fun_toggle_ith_bit(char param_target, char i);

int main()
{
    printf("chr_a in binary: %08b. Same in int: %d.\n", chr_a, chr_a);
    chr_a_ord = fun_set_ith_bit(chr_a, 7);
    printf("chr_a after setting bit 1 in binary: %08b. Same in hex: 0x%02X. Same in int: %d.\n",
            chr_a_ord,
            chr_a_ord,
            chr_a_ord);
    chr_a_and = fun_unset_ith_bit(chr_a, 1);
    printf("chr_a after unsetting bit 1 in binary: %08b. Same in hex: 0x%02X. Same in int: %d.\n",
            chr_a_and,
            chr_a_and,
            chr_a_and);
    chr_a_and = fun_unset_ith_bit(chr_a, 2);
    printf("chr_a after unsetting bit 2 in binary: %08b. Same in hex: 0x%02X. Same in int: %d.\n",
            chr_a_and,
            chr_a_and,
            chr_a_and);
    chr_a_xord = fun_toggle_ith_bit(chr_a, 1);
    printf("chr_a after toggling bit 1 in binary: %08b. Same in hex: 0x%02X. Same in int: %d.\n",
            chr_a_xord,
            chr_a_xord,
            chr_a_xord);
    chr_a_xord = fun_toggle_ith_bit(chr_a, 2);
    printf("chr_a after toggling bit 2 in binary: %08b. Same in hex: 0x%02X. Same in int: %d.\n",
            chr_a_xord,
            chr_a_xord,
            chr_a_xord);
}

char fun_set_ith_bit(char param_target, char i)
{
    // i can only be <= log2(sizeof(param_target))
    int mask = 1 << i;
    return param_target | mask;
}

char fun_unset_ith_bit(char param_target, char i)
{
    int mask = ~(1 << i);
    return param_target & mask;
}

char fun_toggle_ith_bit(char param_target, char i)
{
    int mask = 1 << i;
    return param_target ^ mask;
}
