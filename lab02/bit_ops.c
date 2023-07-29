// Copyright 2023 10X Engineers JUNAID
#include <stdio.h>
#include "/home/user3/C Language/su21-lab-starter/lab02/bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
  return (x >> n) & 0b00000001; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    unsigned mask = 1 << n;
    *x = (*x & ~mask) | (v << n);
}

void flip_bit(unsigned *x, unsigned n) {
    unsigned mask = 1 << n;
    *x ^= mask;
}
