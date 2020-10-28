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
			
			printf("*");

		}
		printf("\n");
	}




	return 0;
}