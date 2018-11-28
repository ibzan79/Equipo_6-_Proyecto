/* Objetivo: Hacer un menú que considere las siguientes opciones: 
				a) Cubo de un numero. 
				b) Numero par o impar.
				c) Salir.
*/

#include <stdio.h>
#include <math.h>

int main () {
	
	int numero = 0, cuboN;
	printf ("==================================================");
	printf ("\n1.-Saber el cubo de un numero n.");
	printf ("\n2.- Saber si un numero es par o impar.");
	printf ("\n3.- Salir.");
	printf ("\n==================================================");
	printf ("\nIngrese una opcion: ");
	scanf ("%d", &numero);
	
	switch (numero){
		
		case 1: printf ("\nIngrese el numero n: ");
				scanf ("%d", &numero);
				cuboN = (pow(numero,3));
				printf ("\nEl numero %d al cubo es: %d", numero, cuboN);
		break;
		
		case 2: printf ("\nIngrese el numero entero que desea: ");
				scanf ("%d", &numero);
				
				if (numero % 2 == 0)
					printf ("\nEl numero es par.");
				else {
					printf ("\nEL numero es impar.");
				}
		break; 
		
		case 3: printf ("\nEspero que le haya servido :)."); break;
		
		default: printf ("\nSe ha equivocado de opcion, por favor pruebe de nuevo."); 
				
	}	
	
	return 0;
}
