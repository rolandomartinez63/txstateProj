#include <stdio.h>
#define MAX 93

int main(void){
int array[][MAX] = {0, 1, 2, 3, 4};
char array1[][92] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
					'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
					'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
					'!', '"', '#', '$', '%', '&', '\x27', '(', ')', '*', '+', ',', '-', '.',
					'/', ':',';', '<', '=', '>', '?', '@', '[', '\x5c', ']', '^', '_', '`', '{', '|', '}', '~' };

char cap[]={'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char lower[]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int digit[]= {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int test[]={'0', '1', '2', '3'};

int cCaps=0;
int cLower=0;
int cDigit=0;
int key =30;

//for (int i=0; i<size; i++){
	//while != '\0'?
	//for (int y=0; y<size; i++)


//}
/*	for (int i=0; i<MAX; i++){
		//printf("printing out array 1d... %d\n", array[0][i]);
		if(i+key<MAX){
			array[1][i] = array[0][(i+key)];
			printf("priting first of array[1][%d]... %d\n",i, array[1][i]);
		}
		else{
			array[1][i] = array[0][(i-(key-1))];
			printf("I am printing else lines of array[1][%d]...%d\n",i, array[1][i]);
		}
	}
*/	
	//This WORKS yeeet lots
	for (int i=key; i<MAX; i++){
		array1[1][i] = array1[0][i];
		printf("priting array [1][%d]....%c\n",i, array1[1][i]);
	}
	for (int i=0; i<key; i++){
		array1[1][i] = array1[0][i];
		printf("priting array [1][%d]....%c\n",i, array1[1][i]);
	}
	
	//Create a search function to search through what the user enters and the arrays
	
	
	
return 0;
}
