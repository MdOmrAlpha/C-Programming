#include<stdio.h>

int main(){

float b, h, a;

printf("Enter base and height: ");
scanf("%f %f", &b, &h);

a = 0.5 * b * h;

printf("Area of acute angled triangle: %f", a);
return 0; }
