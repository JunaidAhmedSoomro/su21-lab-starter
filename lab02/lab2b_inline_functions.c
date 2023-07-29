// Copyright 2023 10X Engineers JUNAID
#include <stdio.h>

static inline int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int result = add(num1, num2);
    printf("The result is: %d\n", result);

    return 0;
}
