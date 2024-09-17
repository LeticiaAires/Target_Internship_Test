#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
// This function uses the sqrt() function which is very fast, with constant time complexity O(1).
int isPerfectSquare(int x) {
    int s = (int)sqrt(x);  
    return (s * s == x);  
}

// Function to check if a number is a Fibonacci number
// This function uses two mathematical conditions, avoiding loops or recursion.
// The overall time complexity is O(1) because it only performs constant-time arithmetic and square root operations.
int isFibonacci(int num) {
    return isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4);
}

int main() {
    int number;

    printf("Enter a number to check if it belongs to the Fibonacci sequence: ");
    scanf("%d", &number);

    // Check if the number is in the Fibonacci sequence
    if (isFibonacci(number)) {
        printf("The number %d is part of the Fibonacci sequence.\n", number);
    } else {
        printf("The number %d is NOT part of the Fibonacci sequence.\n", number);
    }

    return 0;
}
