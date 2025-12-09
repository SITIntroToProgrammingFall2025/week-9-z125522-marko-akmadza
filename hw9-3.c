#include <stdio.h>


int main(void) {


    float matrix[2][3];
    int matrixb[3][2];
    float C[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matrix[i][j]);
        }
    } 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrixb[i][j]);
        }
    } 

    printf("You entered\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%g ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("You entered\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrixb[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {

             C[i][j] = 0;               

        for (int k = 0; k < 3; k++)

        C[i][j] += matrix[i][k]* matrixb[k][j];

        }

    }

    printf("The multiplication product of trix A and matrix B:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%g ", C[i][j]);
        }
        printf("\n");
    }






}