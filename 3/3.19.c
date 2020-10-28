#include <stdio.h>
//PROGRAMA DE VENDERORES QUE GANAN POR COMISION

int main()
{

	float ventas;
	while(1){

		printf("Total de ventas del vendedor (-1 para terminar)\n");	
		scanf("%f",&ventas);
		if(ventas == -1)
			break;
		printf("El suldo del vendedor es: %f\n", 200+(ventas*.09));
	}


	
	return 0;
}