/* Mostrar en pantalla una serie incremental del 0 al 10. ( 0 1 2 3 .... 10) */

#include <stdio.h>

int main () {
	
	int cont;
	
	cont = 0;
	
	while (cont <= 10){
		
		printf ("\n%d", cont);
		
		cont++;
	}
	
	
	
	
	return 0;
}
