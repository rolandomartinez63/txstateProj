#include <stdio.h>

int main()
{
	int a[2][5]={1,2,3,4,5,
		    6,7,8,9,10};

	//for(int x=0; x<2; x++)
	//{		
		for(int i=0; i<5; i++){
			a[1][i]=a[0][i];
		}
	//}

		for(int i=0; i<5; i++){
		}
	for(int x=0; x<2; x++)
	{		
		for(int i=0; i<5; i++){
			printf("printing array....%d\n", a[1][i]);
		}
	}

}
