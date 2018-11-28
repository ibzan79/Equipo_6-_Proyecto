/* 
	Autores: Equipo 6.
	Fecha de entrega: 29/11/2018.
	Objetivo: Juego de "PONG".
*/

#include <stdio.h>
#include <windows.h>
#define V 21
#define H 75

void inicio (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa);
void borde (char campo [V][H]);
void raqJug (char campo [V][H], int iniJug, int finJug);
void raqIa (char campo [V][H], int iniIa, int finIa);
void pel (char campo [V][H], int pelX, int pelY);
void leerCamp (char campo [V][H]);
void gameloop (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa, int modX, int modY, int modIa);
void draw (char campo [V][H]);
void input (char campo [V][H], int *pelX, int *pelY, int *iniJug, int *finJug, int *iniIa, int *finIa, int *modX, int *modY, int *modIa, int *gol);
void update (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa);

int main (){
	
	int pelX, pelY; // Variables para la posición de la pelota.
	int iniJug, finJug; // Estas determinaran donde comienza y donde termina la raqueta del jugador.
	int iniIa, finIa; // Donde comienza y donde terminan las raqutas de la IA (computadora).
	char campo [V][H]; // Las limitaciones del campo de juego.
	
	
	/* =========== VARIABLES DE POSICIÓN ========== */
	
	// Estos valores nos servirán para poner a la pelota más o menos en el medio del campo.
	pelX = 37; // La mitad de "H". 
	pelY = 10; // La mitad de "V".
	
	// Estos valores para ubicar la raqueta del jugador.
	iniJug = 6;
	finJug = 12;
	
	// Estos valores para ubicar la raqueta de la IA.
	iniIa = 5;
	finIa = 19;
	
	/* =========== FIN VARIABLES DE POSICIÓN ========== */
	
	/* ========== VARIABLES DE MODIFICACIÓN ========== */
	
	int modX, modY, modIa; // Modificar la posición de la pelota y de la raqueta de la IA.
	
	modX = -1; // Movimiento de la pelota en horizontal.
	modY = -1; // Movimiento de la pelota en vertical.
	modIa = -1; // Movimiento de la raqueta de la IA.
	
	/* ========== FIN VARIABLES DE MODIFICACIÓN ======= */
	
	// Esta función va a recoger a todos los elementos de las variables y los va a meter dentro de la matriz.
	inicio (campo, pelX, pelY, iniJug, finJug, iniIa, finIa);
	
	// Bucle del juego.
	gameloop (campo, pelX, pelY, iniJug, finJug, iniIa, finIa, modX, modY, modIa);
	
	system ("pause");
	return 0;
}

void inicio (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa){
	
	// Función para los bordes del campo.
	borde (campo);
	
	// Función para la raqueta del jugador.
	raqJug (campo, iniJug, finJug);
	
	// Función para la raqueta de la IA.
	raqIa (campo, iniIa, finIa);
	
	// Función para la pelota.
	pel (campo, pelX, pelY);

}

void borde (char campo [V][H]){
	
	int i, j; // Contadores específicos de esta función.
	
	for (i = 0; i < V; i++){
		for (j = 0; j < H; j++){
			if (i == 0 || i == V-1){
				campo [i][j] = '-'; // Pintar el borde superior e inferior.
			}
			else if (j == 0 || j == H-1){
				campo [i][j] = '|';  // Pintar los bordes laterales.
			}
			else {
				campo [i][j] = ' '; // Se pinta un espacio en las posiciones donde no se cumplan las condiciones del "if" e "if else".
			}
		}
	}
}

void raqJug (char campo [V][H], int iniJug, int finJug){
	
	int i, j;
	
	for (i = iniJug; i <= finJug; i++){
		for (j = 2; j <= 3; j++){
			campo [i][j] = 'X';
		}
	}
}

void raqIa (char campo [V][H], int iniIa, int finIa){
	
	int i, j;
	
	for (i = iniIa; i <= finIa; i++){
		for (j = H - 4; j <= H - 3; j++){
			campo [i][j] = 'X';
		}
	}
}

void pel (char campo [V][H], int pelX, int pelY){
	
	campo [pelY][pelX] = 'O';
	
}

void leerCamp (char campo [V][H]){
	
	int i, j;
	
	for (i = 0; i < V; i++){
		for (j = 0; j < H; j++){
			printf ("%c", campo [i][j]);
		}
		printf ("\n");
	}
}

void gameloop (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa, int modX, int modY, int modIa){
	
	int gol;
	gol = 0;
	
	do {
		
		draw (campo); // Función para dibujar en pantalla.
		input (campo, &pelX, &pelY, &iniJug, &finJug, &iniIa, &finIa, &modX, &modY, &modIa, &gol); // Función para verificar y modificar las posiciones. Se hace por paso por referencia.
		update (campo, pelX, pelY, iniJug, finJug, iniIa, finIa); // Función para actualizar la matriz campo.
		Sleep (10);
		
	}while (gol == 0);
	
}

void draw (char campo [V][H]){
	
	system ("cls");
	leerCamp (campo);
	
}

void input (char campo [V][H], int *pelX, int *pelY, int *iniJug, int *finJug, int *iniIa, int *finIa, int *modX, int *modY, int *modIa, int *gol){
	
	int i;
	char key; // Para reconocer la tecla que se ha pulsado.
	
	// Verificación 
	if (*pelY == 1 || *pelY == V - 2){
		*modY *= -1; // Invertimos la dirección de la pelota en vertical.
	}
	
	if (*pelX == 1 || *pelX == H - 2){ 
		*gol = 1; // Invertimos la posición de la pelota en horizontal.
	}
	
	if (*pelX == 4){ // Cuando choca con la raqueta del jugador.
		for (i = (*iniJug); i <= (*finJug); i++){
			if (i == (*pelY)){
				*modX *= -1; 
			}
		}
	}
	
	if (*pelX == H - 5){
		for (i = (*iniIa); i <= (*finIa); i++){
			if (i == (*pelY)){
				*modX *= -1; // Modificamos la orientación horizontal.
			}
		}
	}
	
	if (*iniIa == 1 || *finIa == V - 1){ // Comprobar la posición de la raqueta de la IA.
		*modIa *= -1;
	}
	
	// Modificación: Para que los elementos del campo se muevan.
	
	if (*gol == 0){
		
		// Pelota:
		*pelX += (*modX);
		*pelY += (*modY);
		
		// Raqueta de la IA:
		*iniIa += (*modIa);
		*finIa += (*modIa);
		
		// Raqueta del usuario:
		if (kbhit() == 1){ // "kbhit vale 1 cuando hemos pulsado una tecla y 0 cuando no hemos pulsado ninguna tecla, y si no hemos pulsado ninguna tecla no se ejecutará el "getch".
			key = getch (); // "getch" es lo mismo que "scanf" pero sin pulsar "enter".
			
			if (key == '8'){ // Para subir.
				if (*iniJug != 1){
					*iniJug -= 1;
					*finJug -= 1;
				}
			}
			
			if (key == '2'){ // Para bajar.
				if (*finJug != V -2){
					*iniJug += 1;
					*finJug += 1;
				}	
			}
		}
	}
}

void update (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa){
	
	// Función para los bordes del campo.
	borde (campo);
	
	// Función para la raqueta del jugador.
	raqJug (campo, iniJug, finJug);
	
	// Función para la raqueta de la IA.
	raqIa (campo, iniIa, finIa);
	
	// Función para la pelota.
	pel (campo, pelX, pelY);
	
}

