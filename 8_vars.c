#include <stdio.h>

int main() {
    int num = 42;
    // int num = 32; // Error: Redefinition of num
    num = 56;
    printf("int: %d/n", num);
    return 0;
}