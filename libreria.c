#include "libreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** OrdenarPila (char** pilaOrd , int posision); // Declaracion implicita 

int head(int N){

	char buff[1024];
	int contador = 0;

	while((contador<N) && (fgets(buff,1024,stdin)!= NULL)){
		printf("%s" , buff);
		contador++;
	}

	return 0;

}


/* int tail (int N){

	char buff[1024];
	char ** pila ;		// Pila 

	 //strcpy para copiar strings , strlen longitud del string( aqui va el +1 por /0) , sizeOf, fgets(entrada) , malloc para memoria. EOF . DIAPOS TEMA 3 
	 ojo al Ctrl + D vale el EOF 

	if (N>0){
		pila = (char **) malloc (N*sizeof(char)); // Reservo espacio. Tantas N como me diga por el tamaño de los char. Se hace el casteo porque devuelve void sino  
		

}
*/

int longlines (int N){

	char buff[1024]; // Almacen temporal
	char ** pila ; // Pila resultante, de mayor a menor ordenada 
	int i;
	int pos=0;
	int imprimir;
	int aux=0;

	// Reservar memoria dinámica. Usar malloc

	pila = (char **) malloc (N*sizeof(char));
	for(i=0; i<N ; i++){
		pila[i] = (char *) malloc (1024*sizeof(char)); // Reservo N espacios con tamaño 1024 ;
	}

	// Recorrer el archivo hasta el final. Luego hacer subprograma para ordenar las N primeras de mayor a menor

	while(fgets(buff , 1024 , stdin) != NULL){     // Mientras que no sea EOF, recorro
		strcpy(pila[pos] , buff);		// Copia String, de buff a la pos 0 de la pila.
		pos++;
	}

	pila = OrdenarPila (pila,pos) ;			// Ordena la pila, sabiendo cual es el numero max de posicion.

	printf("\n");

	//Resultado de la cadena.
	
	for(imprimir=0; imprimir<N; imprimir++){
		printf("%s\n" , pila[imprimir]);
	}

	//Liberar espacio

	while(aux < N){
		free(pila[aux]);
		aux++;
	}
	free(pila);
	return 0;
}



char ** OrdenarPila (char** pilaOrd , int posicion){ // Con 2 punteros, uno adelante y otro atrás. Posicion es la posicion final

	char buffer[1024];
	int i , j;

	for(i=0 ;i>posicion-1; i++){
		for(j=0; j>posicion-i-1; j++){
			if((strlen(pilaOrd[j])) < (strlen(pilaOrd[j+1]))){
				strcpy(buffer,pilaOrd[j]); 			// Posicion de la cadena a buffer, intercambio posiciones.
				strcpy(pilaOrd[j], pilaOrd[j+1]);
				strcpy(pilaOrd[j+1],buffer);
			}
		}	
	}

	return pilaOrd;

}




























