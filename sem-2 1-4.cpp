#include <stdio.h>

int main() {
    int choice;
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("MATRIX OPERATIONS MENU\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter first matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &a[i][j]);

            printf("Enter second matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &b[i][j]);

            printf("Resultant matrix:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++) {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 2: 
            printf("Enter rows and columns: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter first matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &a[i][j]);

            printf("Enter second matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &b[i][j]);

            printf("Resultant matrix:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++) {
                    c[i][j] = a[i][j] - b[i][j];
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 3: 
            printf("Enter rows and columns of first matrix: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter rows and columns of second matrix: ");
            scanf("%d %d", &r2, &c2);

            if (c1 != r2) {
                printf("Matrix multiplication not possible\n");
                break;
            }

            printf("Enter first matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &a[i][j]);

            printf("Enter second matrix:\n");
            for (i = 0; i < r2; i++)
                for (j = 0; j < c2; j++)
                    scanf("%d", &b[i][j]);

            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++) {
                    c[i][j] = 0;
                    for (k = 0; k < c1; k++)
                        c[i][j] += a[i][k] * b[k][j];
                }
            }

            printf("Resultant matrix:\n");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++)
                    printf("%d ", c[i][j]);
                printf("\n");
            }
            break;

        case 4: 
            printf("Enter rows and columns: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter matrix:\n");
            for (i = 0; i < r1; i++)
                for (j = 0; j < c1; j++)
                    scanf("%d", &a[i][j]);

            printf("Transpose of matrix:\n");
            for (i = 0; i < c1; i++) {
                for (j = 0; j < r1; j++)
                    printf("%d ", a[j][i]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

