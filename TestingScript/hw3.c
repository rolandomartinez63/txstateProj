#include <stdio.h>
#include <string.h>
#define MAX 94


void search(char array1[][MAX], char crypt[], char input[], int wants, char lookfor)//wants is if you want to encrypt or decrypt (0 or 1)
{
	int count=0;
	int temp=0;
	for (int i=0; i<7; i++)
	{
		for (int x=0; x<MAX; x++)
		{
			if(array1[0][x]==input[i])
			{
				crypt[i]=array1[1][x];
				//printf("Output the array1[0]... %c and array1[1]... %c\n", array1[0][x], array1[1][x]);
				
			}
		}
		printf("what is in the array of ouputs...%c\n", crypt[i]);
	}

	//Length of the results. 
	while (crypt[count] != '\0')
		count ++;
	
	
	printf("Length of crtpy..%d", count);

}



void encryp(char array1[][MAX], int key)
{
	
	int count=0;
	
	for (int i=key; i<MAX; i++){
		array1[1][count] = array1[0][i];
		//printf("print array results--------- [1][%d]....%c\n",i, array1[1][i]);
		count++;
	}	

	int fin=(MAX-key);
	for (int i=0; i<key; i++){
		array1[1][fin] = array1[0][i];
		//printf("print array results--------- [1][%d]....%c\n",i, array1[1][i]);
		fin++;
	}
	
		for (int i=0; i<MAX; i++){
		//array1[1][i] = array1[0][i];
		printf("print array resultssssssssssssssssssss--------- [1][%d]....%c\n",i, array1[1][i]);
	}	
/*

		for (int i=0; i<MAX; i++){
		//array1[1][fin] = array1[0][i];
		printf("print array results--------- [1][%d]....%c\n",i, array1[1][i]);
		//fin++;
	}
*/
}

void poparr()
{
	int key;
	char input[20]={'\0'};
	char crypt[200];
	char array1[2][MAX] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
					'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
					'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
					'!', '"', '#', '$', '%', '&', '\x27', '(', ')', '*', '+', ',', '-', '.',
					'/', ':',';', '<', '=', '>', '?', '@', '[', '\x5c', ']', '^', '_', '`', '{', '|', '}', '~', '\0' };
	//Gets the users input.
	scanf("%d", &key);
	encryp(array1, key);
	printf("------------------------\n");
		
	scanf("%19s", input); 	
	int wants=0;
	char lookfor='o';
	search(array1, crypt, input, wants, lookfor); 
	
	
}





int main(void){

/*
char array1[2][MAX] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
					'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
					'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
					'!', '"', '#', '$', '%', '&', '\x27', '(', ')', '*', '+', ',', '-', '.',
					'/', ':',';', '<', '=', '>', '?', '@', '[', '\x5c', ']', '^', '_', '`', '{', '|', '}', '~', '\0' };

*/

int rows=2;


char cap[]={'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char lower[]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int digit[]= {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int test[]={'0', '1', '2', '3'};

int cCaps=0;
int cLower=0;
int cDigit=0;
int key =20;

	char choice[20]={'\0'};
	
	printf("What would you like to do to a message? (encrypt, decrypt, exit)\n");
	printf("Enter your choice: ");
	scanf("%19s", choice);
	
	while(strcmp(choice,"exit")!=0)
	{
		if(strcmp(choice,"encrypt")==0)
		{
			printf("Enter your choice: encrypt\n");
			scanf("%19s", choice);
		}
		else if(strcmp(choice,"decrypt")==0)
		{
			printf("Enter your choice: decrypt\n");

			scanf("%19s", choice);
		}
		else
			printf("That is an invalid option\n");
			scanf("%19s", choice);	
		
	}
	
	poparr();



	

/*---------------------------------------

	

	//test the results homie
		for (int i=0; i<MAX; i++){
		//array1[1][i] = array1[0][i];
		printf("print array resultssssssssssssssssssss--------- [1][%d]....%c\n",i, array1[1][i]);
	}	
	
	//Create a search function to search through what the user enters and the arrays	
	
	for(int i=0; i<5; i++)
	{
		printf("printing what you put in.. %c\n ", input[i]);
		
	}
	
	count=0;
	int temp=0;
	for (int i=0; i<20; i++)
	{
		for (int x=0; x<MAX; x++)
		{
			if(array1[0][x]==input[i])
			{
				encryp[i]=array1[1][x];
				count++;
				printf("Output the array1[0]... %c and array1[1]... %c\n", array1[0][x], array1[1][x]);
				
			}
		}
		printf("what is in the array of ouputs...%c\n", input[i]);
	}
		
	
---------------------------------------*/
return 0;
}
