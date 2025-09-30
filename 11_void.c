#include <stdio.h>

// Function with void return type: it doesn't return any value
void greet(void) {
    printf("Hello, World!\n");
}

// Another void function that takes a parameter
void printNumber(int num) {
    printf("The number is: %d\n", num);
}

// Main function
int main() {
    greet();           // Calls the void function
    printNumber(42);   // Calls another void function

    // This would be an error:
    // int x = greet(); // ❌ Cannot assign void to int

    return 0;
}   