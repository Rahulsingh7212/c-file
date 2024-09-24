#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Print the first two terms (special cases)
    printf("%d %d ", t1, t2);

    // Generate and print the remaining n-2 terms
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}