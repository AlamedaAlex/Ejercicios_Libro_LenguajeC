//programa 3.20
//calcular el interes simple.
#include <stdio.h>
int main(int argc, char const *argv[])
{
	float prin,rate,days;
	

	while(1){

		printf("Introduce el prestamo principal (-1 pára terminar)\n");
		scanf("%f",&prin);
		if(prin==-1)
			break;
		printf("Introduce la tarifa de interes\n");
		scanf("%f",&rate);
		printf("Introduce el termino del prestamo en dias \n");
		scanf("%f",&days);
		printf("El cargo de interes es: %f\n",(prin * rate * days)/365);

	}


	return 0;
}