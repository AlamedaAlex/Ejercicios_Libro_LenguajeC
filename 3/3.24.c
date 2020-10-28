//programa 3.24
//introducir 10 numeros e imprimir el mayor de los mismos
#include <stdio.h>
int main(int argc, char const *argv[])
{


	int cont=0,num,max=0;


	for (int i = 0; i < 10; ++i)
	 {


	 	printf("Introduce el numero %i\n",i+1);
	 	scanf("%d",&num);
	 	if(num > max)
	 		max = num;

	 } 

	 printf("El numero mayor es %i\n", max);

	return 0;	
}


