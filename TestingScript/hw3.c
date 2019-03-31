#include <stdio.h>
#include <string.h>
#define MAX 94


void takestring(char input[])
{
    	char str[100]={'\0'};
    	scanf("%[^\n]%*c",str);		
		for(int i=0; i<20; i++)
		{
			input[i]=str[i];
			
		}
}

int getsize(char count[])
{
	int size=0;
	while(count[size]!= '\0')
		size++;
	
	return size;
}

void merge(char input[], char array1[][MAX],int wants)
{
	int size=getsize(input);
	char joined[size*2];
	
	for(int i=0; i<size; i++)
	{
		joined[i]=input[i];
	}
	
	for (int i=0; i<size; i++)
	{
		for (int x=0; x<MAX; x++)
		{
			if(array1[wants][x]==input[i])
			{
				joined[i+size]=array1[1-wants][x];
				//printf("Output the array1[0]... %c and array1[1]... %c\n", array1[0][x], array1[1][x]);
				
			}
		}
		//printf("what is in the array of ouputs...%c\n", joined[i]);
	}	
	
	if(wants==0)
		printf("Your encrypted text is: \n");
	else
		printf("Your decrypted text is: \n");
			
	for(int i=size;i<size*2; i++)
	{
		
		printf("%c", joined[i]);
		
	}	
	printf("\n\n");
	
	printf("Concatention of orignal and encrypted text:");

	for(int i=0;i<size*2; i++)
	{
		
		printf("%c", joined[i]);
		
	}
	printf("\n\n");
}

void count(char input[], char cap[], char lower[], int digit[], char symbol[])
{

	int digSize=0;
	while(digit[digSize]!= '\0')
		digSize++;
	
	int iSize=getsize(input);
	int capSize=getsize(cap);
	int lowSize=getsize(lower);
	//int digSize=getsize(digit);
	int symSize=getsize(symbol);
	int cCap=0;
	int cLower=0;
	int cDigit=0;
	int cSymbol=0;
	
	for(int x=0; x<iSize; x++)
	{
		for(int c=0; c<capSize; c++){
			if(input[x]==cap[c])
				cCap++;
		}
	
		for(int l=0; l<lowSize; l++){
			if(input[x]==lower[l])
				cLower++;
		}
	
		for(int d=0; d<digSize; d++){
			if(input[x]==digit[d])
				cDigit++;
		}

		for(int s=0; s<symSize; s++){
			if(input[x]==symbol[s])
				cSymbol++;
		}
	}
	
	printf("Number of Capital Letters : %d\n", cCap);
	printf("Number of Small Letters :%d\n", cLower);
	printf("Number of Digits : %d\n", cDigit);
	printf("Number of Symbols : %d\n", cSymbol);
	printf("Number of Charters in the message : %d\n", iSize);
	printf("Converting Letters : %s\n", input);
	
}

void search(char array1[][MAX], char crypt[], char input[], int wants)//wants is if you wants to encrypt or decrypt (0 or 1)
{
	int count=0;
	int size=0;
	int temp=0;
	while (input[size] != '\0')
		size++;
	
	for (int i=0; i<size; i++)
	{
		for (int x=0; x<MAX; x++)
		{
			if(array1[wants][x]==input[i])
			{
				crypt[i]=array1[1-wants][x];
				//printf("Output the array1[0]... %c and array1[1]... %c\n", array1[0][x], array1[1][x]);
				
			}
		}
		//printf("what is in the array of ouputs...%c\n", crypt[i]);
	}
	
	for(int i=0;i<size; i++)
	{
		printf("what is in the array of ouputs...%c\n", crypt[i]);

		
		
	}
	
	printf("\n");
	//Length of the results. 
	while (crypt[count] != '\0')
		count ++;


}


//Does the shift to the 2d array 
void encryp(char array1[][MAX], int key)
{
	
	int count=0;
	
	for (int i=key; i<MAX; i++){
		array1[1][count] = array1[0][i];
		count++;
	}	

	int fin=(MAX-key);
	for (int i=0; i<key; i++){
		array1[1][fin] = array1[0][i];
		fin++;
	}

}


int poparr(int wants)
{
	int key;
	char input[20]={'\0'};
	char str[100];
	char crypt[200];
	char array1[2][MAX] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
					'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
					'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
					'!', '"', '#', '$', '%', '&', '\x27', '(', ')', '*', '+', ',', '-', '.',
					'/', ':',';', '<', '=', '>', '?', '@', '[', '\x5c', ']', '^', '_', '`', '{', '|', '}', '~', '\0' };
					
	char cap[]={'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char lower[]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int digit[]= {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char symbol[]={'!', '"', '#', '$', '%', '&', '\x27', '(', ')', '*', '+', ',', '-', '.',
				  '/', ':',';', '<', '=', '>', '?', '@', '[', '\x5c', ']', '^', '_', '`', '{', '|', '}', '~', '\0'};

	printf("Enter your message: \n");
	takestring(input); 	
    //printf("%s\n",input);

	printf("Enter the key number (1-93)\n");
	//Gets the users input.
	scanf("%d", &key);
	
	if(key<0 || key>93)
	{
		printf("Invalid Key Number\n\n");
		return 0;
	}
	else
		encryp(array1, key);
	
	

	printf("------------------------\n");
		
	search(array1, crypt, input, wants); 
	
	count(input, cap, lower, digit, symbol)	;
	
	merge(input, array1, wants);
}





int main(void){

	int wants;

	char choice[20]={'\0'};
	
	printf("Welcome to cryptography ");
	printf("\n\n");

	printf("What would you like to do to a message? (encrypt, decrypt, exit)\n");
	printf("Enter your choice: ");
	//scanf("%19s", choice);
	scanf("%[^\n]%*c",choice);

	while(strcmp(choice,"exit")!=0)
	{

		if(strcmp(choice,"encrypt")==0)
		{
			wants=0;
			poparr(wants);

		}
		else if(strcmp(choice,"decrypt")==0)
		{
			wants =1;
			poparr(wants);
		}
		else
			printf("Invalid message\n\n");
		
		printf("What would you like to do to a message? (encrypt, decrypt, exit)\n");
		printf("Enter your choice: ");
		scanf("%19s", choice);	

	}
	printf("\n\n");
	
	printf("Rolando Martinez Security Systems\n");
	printf("3-27-2019\n");

return 0;
}