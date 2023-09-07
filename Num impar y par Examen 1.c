/*Programa que verifica si unnumero es o impar*/
#include <stdio.h>
int main(void)
{
 int a=0;
  printf("Introduzca numero:\t");
 scanf("%d",&a);
 if (a%2==0) 
{
 printf("El numero es par");
}
else
{
printf("El numero es impar");
}
 return 0;
}
