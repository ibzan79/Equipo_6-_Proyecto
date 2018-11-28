/* Autor: Equipo 6.
   Fecha: 04/11/2018
   Objetivo: Un programa que haga la operación de multiplicación con dos matrices.
*/

#include <stdio.h>

int main (){
	
	int fila, columnas, mult = 0;
	int A[2][2] = {{4,-5},{3,7}};   
	int B[2][2] = {{9,-5},{15,3}};   
	int C[2][2];
	
	for (fila = 0; fila < 2; fila++){
		for (columnas = 0; columnas < 2; columnas++){
			
			C[fila][columnas] = A[fila][0] * B[0][columnas] + A[fila][1] * B[1][columnas];
				
			
			printf ("\n%d", C[fila][columnas]);
	
	}
	}
		
	return 0;
}
