#include<stdio.h>

int main(){

int c, f;

printf("Enter celius temp: ");
scanf("%d", &c);

f = ((c / 5) * 9) + 32;

printf("Farenheit temp: %d",f);
return 0;

}
