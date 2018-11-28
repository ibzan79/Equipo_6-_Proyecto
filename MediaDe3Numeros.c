#include <stdio.h>

int main (){
	
	float n1, n2, n3, media;
	
	printf ("Introduzca el primer numero: ", n1);
	scanf ("%f", &n1);
	printf ("Introduzca el segundo numero: ", n2);
	scanf ("%f", &n2);
	printf ("Introduzca el tercer numero: ", n3);
	scanf ("%f", &n3);
	
	media = (n1 + n2 +n3)/3;
	
	printf ("La media de los tres numeros es: %.3f", media);
	
	
	return 0;
}
