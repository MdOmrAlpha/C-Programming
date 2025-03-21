#include <stdio.h>

int main() {
    float i, c;

    printf("Enter length in inches: ");
    scanf("%f", &i);

    c = i * 2.54;

    printf("%.2f inches is equal to %.2f centimeters.\n", i, c);

    return 0;
}
