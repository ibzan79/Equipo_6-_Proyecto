/* Mostrar en pantalla la tabla del 6. */

#include <stdio.h>

int main (){
	
	int cont, tabla, resultado = 0;
	
	cont = 1;
	tabla = 6;
	
	while (cont <= 10){
		
		resultado = cont * tabla;
		
		printf ("\nEl resultado de %d por %d es: %d", cont, tabla, resultado);
		
		cont ++;
		
	}
	
	return 0;
}
