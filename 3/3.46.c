//cifrar cosas
//No se si es +7 o es mod de 10
#include <stdio.h>
#define TAMANIO 4
int main()
{	
	int num,digi,i=0,array[4],aux;
	printf("Introduce un numero de 4 numeros\n");
	scanf("%i",&num);



	while(num>0){

		digi = num % 10;
		num = num / 10;
		array[i] = digi +7;
		i++;
	}


	aux = array[0];
	array[0] = array[2];
	array[2]=aux;

	aux = array[1];
	array[1] = array[3];
	array[3]= aux;


	printf("El entero cifrado es:\n");

	for (int x = 0; x < 4; x++)
	{
		printf("%i", array[3-x]);
	}


	return 0;
}
