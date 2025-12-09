#include <stdio.h>
#include <math.h>

int main() {
    int R, G, B;
    scanf("%d", &R);
    scanf("%d", &G);
    scanf("%d", &B);

    int colors[5][3] = {
        {0, 0, 0},
        {255, 0, 0},
        {0, 255, 0},
        {0, 0, 255},
        {255, 255, 255}
    };

    char *names[5] = {
        "Black",
        "Red",
        "Green",
        "Blue",
        "White"
    };

    double min = 1e18;
    int idx = 0;

    for (int i = 0; i < 5; i++) {
        double dR = R - colors[i][0];
        double dG = G - colors[i][1];
        double dB = B - colors[i][2];
        double dist = sqrt(dR*dR + dG*dG + dB*dB);
        if (dist < min) {
            min = dist;
            idx = i;
        }
    }

    printf("The nearest color is %s\n", names[idx]);
    return 0;
}
