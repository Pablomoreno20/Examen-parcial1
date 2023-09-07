#include <stdio.h>

int main() 
{
    int numeros;
	 // Declara un array para almacenar números (ajusta el tamaño según tus necesidades)
    int n; 
	// Número de elementos en la lista

    printf("Introduce el número de elementos en la lista: ");
    scanf("%d", &n);

    printf("Introduce los numeros:\n");
    for (n = 0; n<= 10; n++)
	 {
        printf("%d\n", n);
    }

    //tf("Números impares en la lista:\n");
   //or ( n = 0; n < 10; n++)
	 

    return 0;
}
