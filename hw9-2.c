#include <stdio.h>

int main(void) {
    int matrix[3][3];
    int matrixb[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("You entered\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixb[i][j] = matrix[i][2 - j];
        }
    }

    printf("Output\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrixb[i][j]);
        }
        printf("\n");
    }

    return 0;
}
