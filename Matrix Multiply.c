#include<stdio.h>

int main() {
    int first[10][10], second[10][10], result[10][10], r1, r2, c1, c2, i, j, k, sum;

    printf("Enter rows & columns for first matrix:");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows & columns for second matrix:");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2) {
        printf("Error!! Columns of the first matrix not equal to rows of the second matrix\n");
        printf("Enter rows & columns for first matrix:");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows & columns for second matrix:");
        scanf("%d %d", &r2, &c2);
    }

    // Taking input for 1st matrix
    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    // Taking input for 2nd matrix
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    // Printing 1st matrix
    printf("\nFirst matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    // Printing 2nd matrix
    printf("\nSecond matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    // Multiplying Matrix
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            sum=0;
            for (k=0; k < c1; k++) {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
        }
    }
    // Printing result matrix
    printf("\nResult matrix:\n");
    for(i=0;i<r1;i++) {
        for (j=0;j< c2; j++) {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
