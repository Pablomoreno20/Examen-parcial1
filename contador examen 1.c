#include <stdio.h>

int main() 
{
    int numeros;
	 // Declara un array para almacenar n�meros (ajusta el tama�o seg�n tus necesidades)
    int n; 
	// N�mero de elementos en la lista

    printf("Introduce el n�mero de elementos en la lista: ");
    scanf("%d", &n);

    printf("Introduce los numeros:\n");
    for (n = 0; n<= 10; n++)
	 {
        printf("%d\n", n);
    }

    //tf("N�meros impares en la lista:\n");
   //or ( n = 0; n < 10; n++)
	 

    return 0;
}
