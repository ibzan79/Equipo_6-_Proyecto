/* Cajero Virtual. */

#include <stdio.h>

int main () {
	
	int opcion;
	float cajero = 1000, agregar, restar;
	
	printf ("\tBienvenido a su cajero virtual.");
	printf ("\n1.- Ingreso en cuenta.");
	printf ("\n2.- Retiro de dinero de la cuenta.");
	printf ("\n3.- Salir.");
	printf ("\nPor favor ingrese una opcion: ", opcion);
	scanf ("%d", &opcion);
	
	switch (opcion){
		case 1: printf ("\nDigite la cantidad que quiera ingresar: ");
				scanf ("%f", &agregar);
				cajero = cajero + agregar;
				printf ("\nEl saldo de la cuenta es: %.2f", cajero);
		break;
		
		case 2: printf ("\nDigite el monto que desea retirar: ");
				scanf ("%f", &restar);
				if (restar > cajero)
					printf ("\nImposible, el monto que desea retirar es mayor al de la cuenta.");
				else {
					cajero = cajero - restar;
					printf ("\nEl saldo de la cuenta es de: %.2f", cajero);
				}
		break;
		
		case 3: printf ("\nVuelva pronto."); break;
		
		default: printf ("\nSe equivoco de opcion, vuelva intentarlo.");
			
		
	}
	
	
	
	
	
	return 0;
}
