#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float D, x, y;

    printf("Enter a, b, c, d, e, f: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    D = (a * d) - (b * c);

    if (D == 0) {
        printf("No unique solution exists.\n");
    } else {
        x = (e * d - b * f) / D;
        y = (a * f - e * c) / D;

        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

    return 0;
}

