#include <stdio.h>
#include <math.h>
#include "libreria.h"
#include <string.h>
#include <stdlib.h>

/* Menu para el inicio de la practica 1 */ 
// Ejecutar libreria y main a la vez con el gcc libreria.c test.c -o test  

int main (int argc , char *argv[]){

	int n;
	
	int metodoDecidir (char* opcion , int n){

		if(strcmp(opcion,"head")==0){ // String to be compared. = 0 si son iguales. Man para mas info
			head(n);
			return 0;
		} else if(strcmp(opcion, "tail")==0){
			//tail(n);
			return 0;
		} else if (strcmp(opcion, "longlines")==0){
			//longlines(n);
			return 0;
		} else {
			fprintf(stderr, "No ha usado un nombre de un metodo\n");
			return 1;
		}
	}

	printf("1.Funcion head(int N) ---> Muetra las N primeras lineas\n");
	printf("2.Funcion tail(int N) ---> Muestra las N ultimas lineas\n");
	printf("3.Funcion longlines(int N) ---> Muestra las N lineas mas largas\n");	


	if (argc == 1){ // Solo nombre del programa. No hay variable.
		fprintf(stderr, "No ha introducido nombre de una funcion\n");
		return 1;
	} else if (argc == 2){ // Solo con nombre funcion. Tiene 10 lineas para leer.
		n = 10;
		return (metodoDecidir(argv[1] , n)); // Al ser argv *char como opcion del metodo no hay problema.
	} else {
		char *lineasEntrada = argv[2];
		n = (int) atoi (lineasEntrada); // Casting , pasar de *char a int
		if(n<0){
			fprintf(stderr, "El numero de lineas no puede ser menor de 0\n");
			return 1;
		} else {
			return (metodoDecidir(argv[1] , n));								// DUDA, NECESITO EL '-' ANTES ??? PONER OTRO IF
		}
	}

}
