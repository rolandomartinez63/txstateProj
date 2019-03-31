#include <stdio.h>
#include <string.h>
#define MAX 94


void takestring(char input[])
{
	    	printf("Printing takestring\n");

    	char str[100];
    	scanf("%[^\n]%*c",str);
    	//scanf("%s", str);
		printf("%s\n",str);
		
		for(int i=0; i<20; i++)
		{
			input[i]=str[i];
			
		}
		printf("%s\n",input);

}


void poparr(char input[]){
/*
	char array1[2][MAX] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
					'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
					'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
					'!', '"', '#', '$', '%', '&', '\x27', '(', ')', '*', '+', ',', '-', '.',
					'/', ':',';', '<', '=', '>', '?', '@', '[', '\x5c', ']', '^', '_', '`', '{', '|', '}', '~', '\0' };

	*/				
	printf("Enter your message: \n");
	takestring(input); 	
    //printf("%s\n",input);
	
}


int main(void){

	char choice[20];

	printf("What would you like to do to a message? (encrypt, decrypt, exit)\n");
	printf("Enter your choice: ");
	//scanf("%s", choice);
	scanf("%[^\n]%*c",choice);
	
	poparr(choice);

/*
	while(strcmp(choice,"exit")!=0)
	{

		if(strcmp(choice,"encrypt")==0)
		{
			printf("Enter your choice: encrypt\n");
			poparr(choice);

		}
		else if(strcmp(choice,"decrypt")==0)
		{
			printf("Enter your choice: decrypt\n");
			poparr(choice);
		}
		else
			printf("Invalid message\n\n");
		
		printf("What would you like to do to a message? (encrypt, decrypt, exit)\n");
		printf("Enter your choice: ");
		scanf("%19s", choice);	

	}
*/
		printf("Rolando Martinez Security Systems\n");
		printf("3-27-2019");

return 0;
}