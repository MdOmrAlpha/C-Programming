#include <stdio.h>

int main() {
    float c, i;

    printf("Enter length in centimeters: ");
    scanf("%f", &c);

    i = c * 0.3937;

    printf("%.2f centimeters is equal to %.2f inches.\n", c, i);

    return 0;
}
