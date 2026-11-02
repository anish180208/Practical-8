#include <stdio.h>

// User-Defined Function to calculate and print cubes using a pointer
void findCubes(int *ptr, int size) {
    printf("\nCubes of all elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Access element via pointer arithmetic: *(ptr + i * size + j)
            int val = *(ptr + (i * size) + j);
            printf("%d ", val * val * val);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter array's size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("\nEnter array elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Pass the base address of the 2D array as a pointer
    findCubes((int *)a, n);

    return 0;
}
