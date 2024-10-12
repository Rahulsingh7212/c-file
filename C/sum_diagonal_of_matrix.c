#include <stdio.h>

int main() {
    int a[5][5], i, j, rc, trace = 0;

    printf("Enter the rows and columns of matrix (max 5): ");
    if (scanf("%d", &rc) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (rc < 1 || rc > 5) {
        printf("Invalid matrix size\n");
        return 1;
    }

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < rc; i++) {
        for (j = 0; j < rc; j++) {
            printf("Enter the element at a[%d][%d]: ", i, j);
            if (scanf("%d", &a[i][j]) != 1) {
                printf("Invalid input\n");
                return 1;
            }
        }
    }

    for (i = 0; i < rc; i++) {
        trace += a[i][i];
    }

    printf("The trace of matrix is: %d\n", trace);
    return 0;
}