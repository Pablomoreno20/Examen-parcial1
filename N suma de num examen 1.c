#include <stdio.h>


int main()
 {	
 int n;
 int suma=1;
 int i=1;

 printf("Pon un numero: ");
 scanf("%d",&n);

 if(n<=0)
 {
 printf("Pongalo positivo.\n");	
 } 
else
 {
	while (i<=n)
	{
	suma +=i;
	i++;
    }
   printf("La suma desde 1 hasta %d es: %d\n", n, suma);
}
return 0;
}
