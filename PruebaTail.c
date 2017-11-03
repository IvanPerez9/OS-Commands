	while(fgets(buff , 1024 , stdin) != NULL){     	     // Mientras que no sea EOF, recorro	
		printf("While primero\n");
		printf("\n");
		if(strlen(buff)>strlen(pila[0])){
			printf("Si la longitud de buff es mayor que pila en 0\n");
			while((pos<N) && (strlen(buff)>strlen(pila[pos]))){  // Emepezar en la posicion 0. Numero de veces que hay que imprimir 
				printf("While pos<N y longiud de buff mayor que pila pos aumento pos++\n");
				pos++;
			}
		}
		if(pos >0){				// Si ha metido un numero superior a 0
			printf("Si la pos es >0\n");
			int  indice = 0;
			while(indice<N-1){		// Deja espacio en la pila, moviendo todo. Le voy la vuelta a la pila ayudandome de buff. 
				printf("Si indice= 0 es menor que N-1 , hago indice ++. \n");
				printf("Imprimo pila con indice %s" , pila[indice]); 
				strcpy(pila[indice],pila[indice+1]);
				indice++;
				printf("lo de buff %s" , buff);
			}
			strcpy(pila[pos-1],buff);	// Copia lo que habia en buff a la pila , le da la vuelta.
		}
	}

	printf("\n")

/*
*******************************************************************************
ES EL CASO DE PRUEBA PARA VER COMO VA HACIENDO LA COSAS, ES OPTIMIZABLE PERO VA 
*******************************************************************************
*/
