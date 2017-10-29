#include "libreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** OrdenarPila (char** pilaOrd , int posision); // Declaracion implicita 
void cambio(int pos, char** text,char* buf);


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

	pila = (char **) malloc (N*sizeof(char*)); // El array que crea es de 10 en el peor caso, por lo que miro lineas mas grandes al mismo tiempo 
	for(i=0; i<N ; i++){
		pila[i] = (char *) malloc (1024*sizeof(char));  // Reservo N espacios con tamaño 1024 en cada  ;
	}

	// Recorrer el archivo hasta el final.

	while(fgets(buff , 1024 , stdin) != NULL){     	     // Mientras que no sea EOF, recorro		
		if(strlen(buff)>strlen(pila[0])){
			while((pos<N) && (strlen(buff)>strlen(pila[pos]))){ // Emepezar en la posicion 0 
				pos++;
				printf("Hola 1");
			}
		}
		if(pos == 0){			// posicion 0
			strcpy(pila[0],buff);
			printf("hola 2");
		}else{
			int  indice = 0;
			//Ordena los elementos.
			while(indice<pos-1){
				strcpy(pila[indice],pila[indice +1]);
				indice++;
				printf("Hola 3");
			}
			//Inserta el nuevo elemento.
			strcpy(pila[pos-1],buff);
			printf("hola 4");
		}
	}

	printf("\n");

	//Resultado de la cadena.
	
	for(imprimir=0; imprimir<pos; imprimir++){
		printf("%s" , pila[imprimir]);
	}

	//Liberar espacio

	while(aux < N){
		free(pila[aux]);
		aux++;
	}
	free(pila);
	return 0;
}































