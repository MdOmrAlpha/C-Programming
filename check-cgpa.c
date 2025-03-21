#include <stdio.h>

int main() {
    float marks, cgpa;

    printf("Enter marks for the subject (0-100): ");
    scanf("%f", &marks);

    cgpa = (marks / 100) * 4;

    printf("CGPA result for the subject: %.2f", cgpa);

    return 0;
}
