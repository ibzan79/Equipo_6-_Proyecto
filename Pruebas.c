#include <stdio.h>

int main () {
	
	float Pi = 6;
	int x = 3;
	float suma = 0;
	char y[50]; // El [] sirve para decir cuantos caracteres queremos como máximos para que el usuario escriba.
	
	suma = Pi / x;
	
	
	printf ("La suma es: %.4f", suma);
	
	printf ("\n\nIntroduzca su nombre: ", y);
	gets (y); // "GETS" se usa para que ponga completo lo que el usuario pone. Con "SCANF" solo guarda el dato hasta un espacio.
	// %s es para ese tipo de caracteres, que pides un cierto número de ellos.
	
	printf ("Su nombre es: %s", y);


	
	
	return 0;
}
