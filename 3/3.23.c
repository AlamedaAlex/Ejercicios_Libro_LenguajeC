//programa 3.23
//imprimir numeros del uno al diez
#include <stdio.h>
int imprimir(int x);
int main(int argc, char const *argv[])
{


	for (int i = 0; i < 10; ++i)
	{
		printf("%i", i+1);
	}


	return 0;
}



int imprimir(int x){
	if(x==0){
		return 0;
	}
		printf("%i",x);
		imprimir(--x);
	
}