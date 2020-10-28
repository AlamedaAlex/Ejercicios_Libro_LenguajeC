//3.47 sacar factorial
#include <stdio.h>
int main()
{	

	int num;
	printf("introduce un numero no negativo\n");
	scanf("%i",&num);

	unsigned long fac=1;
	for (int i = num; i > 0; i--)
	{
		fac *= i;
	}

	printf("%li\n", fac);

	return 0;
}
