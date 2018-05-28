#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/*
* Author: Iván Pérez Huete
*
* CD , use getenv, getcwd and chdir 
*
*
* getenv: Search for the environment string pointed to by name and return associated value
* getcwd: Get the parameter of the current working directory
* chdir: Changed working directory 
*
* 25/05/18
*/

int main (int argc , char * argv[]){
	
	char *dir; // Variable for directories 
	char buffer[512]; 
	
	if(argc > 2) // Can not use command "cd" to two directories 
		{
		  fprintf(stderr,"Uso: %s directorio\n", argv[0]);
		}
	if (argc == 1) // If 1 then get HOME 
	{
		dir = getenv("HOME");
		if(dir == NULL)
		{
			fprintf(stderr,"No existe la variable $HOME\n");	
		}
	}else { // Go to dir 
		dir = argv[1];
	}
	
	// Checks if "dir" is a directory 
	
	if (chdir(dir) != 0) { // Sino es distinto de 0 lo hace normal el chdir 
		fprintf(stderr,"Error changing directories: %s\n", strerror(errno)); 
		// Los errores a llamada al sistema siempre se guardan en errno, y strerror explica el porque de errno.
	}
	printf( "Actual directory: %s\n", getcwd(buffer,-1));
}
