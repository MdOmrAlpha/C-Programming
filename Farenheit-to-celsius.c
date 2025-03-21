#include<stdio.h>

int main(){

int c, f;

printf("Enter farenheit temp: ");
scanf("%d", &f);

c = ((f - 32) / 9) * 5;

printf("Celsius temp: %d",c);
return 0;

}
