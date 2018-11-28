/* Objetivo: Digite un numero, si el numero supera a 10, multiplique los 10 primeros numeros, sino supera a 10 entonces sumelos. */

#include <stdio.h>

int main () {
	
int n,cont,mult=1,suma=0;

	printf("Ingrese un numero: ");
	scanf("%i",&n);

	cont=1;

	if (n<=10){

  		while (cont<=n){

   		suma=suma+cont;

   		cont++;

 	 }	

  	printf("\n%i",suma);

	}

	else{

  		while (cont<=10){

   		mult=mult*cont;

   		cont++;

  	}

  	printf("\n%i",mult);

	}

	return 0;

}
