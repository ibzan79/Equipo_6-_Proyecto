	int multi, cont, numN;
	
	cont = 1;
	
	printf ("Introduzca un numero: ");
	scanf ("%d", &numN);
	
	
	
	while (cont >= 1 && cont < numN){
		
	multi = cont * 2;
		printf ("\n%d", multi);
		cont++;
	
}


/* 

#include <stdio.h>

int main () {
	
	int numN, cont, resto=0, resul, multi;
	
	printf ("Introduzca un numero binario: ");
	scanf ("%d", &numN);
	
	cont = 1;
	multi = 0;
	
	while (numN >= 1){
		
		resul = (numN / 10)*2;
		resto = numN % 10;
		
		printf ("\n%d.", resto);
		
		numN = (numN - resto)/10;	
		
		
	}

*/

/*
#include <stdio.h>
#include <stdio.h>

int main () {
	
	int numN, cont, resto=0, resul, multi, potencia, numM;
	
	printf ("Introduzca un numero binario: ");
	scanf ("%d", &numN);
	
	cont = 1;
	multi = 0;
	potencia = 0;
	
	while (numN >= 1){	
	
		resul = (numN / 10);
		resto = numN % 10;
		
		
		numN = (numN - resto)/10;	
		
		numM = (pow(2,potencia));
		
			printf ("\n%d", resto*numM);
		
		potencia++;
		
		

    }
    
    
		
		
	return 0;
}
*/
