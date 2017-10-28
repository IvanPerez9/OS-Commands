#include "libreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int head(int N){

	char buff[1024];
	int contador = 0;

	while((contador<N) && (fgets(buff,1024,stdin)!= NULL)){
		printf("%s" , buff);
		contador++;
	}

	return 0;

}

int tail (int N){

	char buff[1024];
	char ** pila ;		// Pila 

	// strcpy para copiar strings , strlen longitud del string( aqui va el +1 por /0) , sizeOf, fgets(entrada) , malloc para memoria. EOF . DIAPOS TEMA 3 
	// ojo al Ctrl + D vale el EOF 

	if (N>0){
		pila = (char **) malloc (N*sizeof(char)); // Reservo espacio. Tantas N como me diga por el tamaño de los char. Se hace el casteo porque devuelve void sino  
		

}
