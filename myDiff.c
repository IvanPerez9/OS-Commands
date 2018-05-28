#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
 


/*
* Author: Iván Pérez Huete
*
* myDiff -> Implements a function which compares 2 existing files and determine if they are equal or not.
*
* 25/05/18
*/

int main (int argc, char * argv[]){
	
	int aux1 = 1; // Go throught File 1
	int aux2 = 1; // Go throught File 2
	
	int closeError1, closeError2; // Checks if there is an error closing the files
	char buff[1], buff2[1]; // Read content will be store here
	
	// Check the arguments introduced by the user are correct or not
	// Check correct syntax input
	if(argc != 3){
		printf("Syntax input error \n");
		printf("Correct syntax: %s <file1> <file2> \n", argv[0]);
		return -1;
	}
	
	// As we have to work with file, we'll give them a identifier to simpified the task
	int fileId1 = open(argv[1], O_RDONLY);
	int fileId2 = open(argv[2], O_RDONLY);
	
	int size1 = sizeof(fileId1);
	int size2 = sizeof(fileId2);
	
	// Check if there is any error opening the files
	if(fileId1 == -1 || fileId2 == -1){
		fprintf(stderr, "The file can not be opened %s\n", strerror(errno));	
		return -1;
	}
	
	// Go throught the files and check if every single line of them are equal
	
	// Infinite loop to reach the end of the files and read
	while (aux1== 1 && aux2 == 1){
		
		aux1 = read (fileId1 , buff , 1);
		aux2 = read (fileId2, buff2 , 1);
		
		// Possible error in read function
		if( aux1 == -1 || aux2 == -1){
			fprintf(stderr, "The file can not be read. %s\n", strerror(errno));	
			close(fileId1);
			close(fileId2);
			return -1;
		}
		
		// Check if the are different 
		if(buff[0] != buff2[0]){
			printf("The files are different \n");	
			closeError1 = close(fileId1);
			closeError2 = close(fileId2);
			if(closeError1 == -1 || closeError2 == -1){
				fprintf(stderr, "Error closing the files. %s\n", strerror(errno));	
				return -1;
			}
			return -1;
		}
		
		// checks if they have different length
		if( size1 != size2 ) {
			printf("The files are different, the have different length \n");	
			closeError1 = close(fileId1);
			closeError2 = close(fileId2);
				if(closeError1 == -1 || closeError2 == -1){
					fprintf(stderr, "Error closing the files %s\n", strerror(errno));	
					return -1;
				}
			return -1;
		}
	} // end While
	
	// Check if they are equal , if not check if one is longer thant the other then the are not equal
	if(aux1 == 0 && aux2 == 0){
		printf("The files %s and %s are equal \n" , argv[1] , argv[2]);
		closeError1 = close(fileId1);
		closeError2 = close(fileId2);
			if(closeError1 == -1 || closeError2 == -1){
				fprintf(stderr, "Error closing the files %s\n", strerror(errno));	
				return -1;
			};
	} // end If equal 	
}