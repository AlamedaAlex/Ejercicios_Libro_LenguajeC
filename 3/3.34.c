#include <stdio.h>


int main()
{
	int l;
	printf("Introduce el lado del cuadrado\n");
	scanf("%d",&l);


	for (int i = 1; i <= l; ++i)
	{
		for (int x = 1; x <= l; ++x)
		{
			if(i == 1 || i==l){
				printf("*");
			}else if(x == 1 || x==l){
				printf("*");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}




	return 0;
}