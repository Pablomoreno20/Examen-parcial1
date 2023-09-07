#include <stdio.h>

int main()
 {
  int respuesta,respuesta2,suma;
 
 
  printf("quieres imprimir 10 numeros? 1=si2=no\n");
  scanf("%d",&respuesta);
  if(respuesta==1)
  {
  
  printf("dame un numeor");
  scanf("%d", &respuesta2);
  suma=respuesta2 + 1;
  while (suma<=respuesta2 + 10)
   {
 	 printf("%d\n", suma);
 	 suma++;
 	
   }
  }
  
  else
  { 
  printf("Eso es todo amigos");
  }
 return 0;
}
