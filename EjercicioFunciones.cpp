/* Objetivo: Hacer un programa que pida por pantalla un número del uno al diez y mediante un procedimiento muestre por pantalla el número escrito en letras. */

#include <stdio.h>

void menu();
void uno();
void dos();
void tres();
void cuatro();
void cinco();
void seis();
void siete();
void ocho();
void nueve();
void diez();

int main (){
	
	menu ();
	
	return 0;
}

void menu (){
	
		int opc;
	
	do {
		
		printf ("Opcion 1");
		printf ("\nOpcion 2");
		printf ("\nOpcion 3");
		printf ("\nOpcion 4");
		printf ("\nOpcion 5");
		printf ("\nOpcion 6");
		printf ("\nOpcion 7");
		printf ("\nOpcion 8");
		printf ("\nOpcion 9");
		printf ("\nOpcion 10");
		printf ("\nPara salir inserte el numero 11.");
		
		printf ("\nDigite una opcion: ", opc);
		scanf ("%d", &opc);
		
		switch (opc){
			
			case 1: uno(); break;
			case 2: dos(); break;
			case 3: tres(); break;
			case 4: cuatro(); break;
			case 5: cinco(); break;
			case 6: seis(); break;
			case 7: siete(); break;
			case 8: ocho(); break;
			case 9: nueve(); break;
			case 10: diez(); break;
			
		}
		
	}while(opc!=11);
}

void uno(){
	
	printf ("\nUNO\n\n1");
	
}

void dos(){
	
	printf ("\nDOS\n\n");
	
}

void tres(){
	
	printf ("\nTRES\n\n");
	
}

void cuatro(){
	
	printf ("\nCUATRO\n\n");
	
}

void cinco(){
	
	printf ("\nCINCO\n\n");
	
}

void seis(){
	
	printf ("\nSEIS\n\n");
	
}

void siete(){
	
	printf ("\nSIETE\n\n");
	
}

void ocho(){
	
	printf ("\nOCHO\n\n");
	
}

void nueve(){
	
	printf ("\nNUEVE\n\n");
	
}

void diez(){
	
	printf ("\nDIEZ\n\n");
	
}






















