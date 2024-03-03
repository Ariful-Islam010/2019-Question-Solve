#include<stdio.h>
int main() {
    int i,j,numberofrows, numberofcols;
    // Input the number of rows & cols
    printf("Enter the number of rows & cols:");
    scanf("%d %d",&numberofrows,&numberofcols);
    int A[10][10], B[10][10], C[10][10];
    // Scanning for A Matrix
    printf("Enter A matrix:\n");
    for (i = 0; i < numberofrows; i++) {
        for (j = 0; j < numberofcols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    // Scanning for B Matrix
    printf("Enter B matrix:\n");
    for (i = 0; i < numberofrows; i++) {
        for (j = 0; j < numberofcols; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // Printing A matrix
    printf("A matrix is:\n");
    for (i = 0; i < numberofrows; i++) {
        for (j = 0; j < numberofcols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Printing B matrix
    printf("B matrix is:\n");
    for (i = 0; i < numberofrows; i++) {
        for (j = 0; j < numberofcols; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Addition of A + B
    printf("C matrix is:\n");
    for (i = 0; i < numberofrows; i++) {
        for (j=0;j<numberofcols;j++) {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

