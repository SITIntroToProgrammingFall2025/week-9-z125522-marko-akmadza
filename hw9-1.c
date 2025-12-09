#include <stdio.h>
#include <math.h>

int main() {

    int matrix[2][2];

    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        scanf("%d", &matrix[i][j]);
    }
}

   printf("You entered\n");
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", matrix[i][j]);
    }
     printf("\n");
}

    float determinant = matrix[0][0]*matrix[1][1]-matrix[1][0]*matrix[0][1];

    printf("Determinant is %f\n", determinant);


}