#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function prototypes
bool isPrime(int number);
void findPrimesInRange(int start, int end);

int main() {
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    if (start > end || start < 2) {
        printf("Invalid range. Start must be >= 2 and less than or equal to end.\n");
        return 1;
    }

    findPrimesInRange(start, end);

    return 0;
}

// Function to check if a number is prime
bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

// Function to find primes in a range and save them to a file
void findPrimesInRange(int start, int end) {
    FILE *file = fopen("primes.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "Prime numbers between %d and %d:\n", start, end);
    int count = 0;

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            fprintf(file, "%d ", i);
            count++;
        }
    }

    fclose(file);

    if (count == 0) {
        printf("No prime numbers found in the given range.\n");
    } else {
        printf("Prime numbers saved to primes.txt successfully!\n");
    }
}