#include <stdio.h>
#include <math.h>
#include "libreria.h"
#include <string.h>
#include <stdlib.h>

// Ejecutar libreria y main a la vez con el gcc libreria.c test.c -o test  
// Añadir gcc -Wall -Wextra para los errores 

int main (int argc , char *argv[]){

	#define DEFAULTLINES 10 // Constante, 10 lineas si no paso nada
	int nLineas; // Numero de linea que le paso 

	if(argc < 2) {

       	fprintf(stderr, "No ha introducido nombre de una funcion\n");
        return 1;

    	}else{
		if(strcmp(argv[1],"head") == 0){ // Compara String 
			if(argc == 2){ // Solo el nombre de la funcion, no le paso nada 10 lineas
				return head(DEFAULTLINES);
            		}else{
				char *lineasEntrada = argv[2];
				nLineas = (int) atoi(lineasEntrada); // Casting para pasar de tipo
               			return head(nLineas);
           		}
        	}
		else if(strcmp(argv[1],"tail") == 0){  
			if(argc == 2){ 
				return tail(DEFAULTLINES);
           		}else{
				char *lineasEntrada = argv[2];
				nLineas = (int) atoi(lineasEntrada); 
				return tail(nLineas);
           		}
        	}
       		else if(strcmp(argv[1],"longlines") == 0){                
			if(argc == 2){
				return longlines(DEFAULTLINES);
            }else{
				return longlines(atoi(argv[2]));
            }
		}else{
			fprintf(stderr, "No ha usado un nombre de un metodo\n");
			return 1;
		}
	}
}
