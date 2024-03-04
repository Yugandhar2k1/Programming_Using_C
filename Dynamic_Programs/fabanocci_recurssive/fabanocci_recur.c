#include<stdio.h>

int fibonacci_recursive(int n);

int fibonacci_recursive(int n) {
    // Base cases
    if (n <= 1)
        return n;
    
    // Recursive calls
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int result = fibonacci_recursive(n);
    printf("The %dth Fibonacci number: %d", n, result);

    return 0;
}
