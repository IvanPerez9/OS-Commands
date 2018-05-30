#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

/*
* Author: Iván Pérez Huete
*
* mySeq -> Same as Seq command.Generate a list of numbers
* 
* mySeq FIRST INCREMENT LAST 
*
* 30/05/18
*/

int main (int argc, char * argv[]){
	
	int i;
	int start = 1;
	int last;
	int increase;
	
	// Depends on how many argument it have 
	switch(argc){
		
		case 2: last = atoi(argv[1]);
				break;
		case 3: start = atoi(argv[1]);
				last = atoi(argv[2]);
				break;
		case 4: start = atoi(argv[1]);
				increase = atoi(argv[2]);
				last = atoi(argv[3]);
				break;
		default: 
				printf ("Use: \n%s LAST\n%s START LAST\n%s START INCREASE LAST\n", argv[0] , argv[0], argv[0]);
				return 1;			
	}
	
	// Increase the number 
	for (i = start; i<=last; i = i + increase){
		printf("%d\n" , i);	
	}
	
	return 0;
}