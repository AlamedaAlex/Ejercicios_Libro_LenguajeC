#include <stdio.h>


int main(int argc, char const *argv[])
{
	

	printf("N\tN*10\tN*100\tN*1000\n");
	for (int i = 1; i <= 10; ++i)
	{
		printf("%i\t%i\t%i\t%i\n",i,i*10,i*100,i*1000);
	}





	return 0;
}