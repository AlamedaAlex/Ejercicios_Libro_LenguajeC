#include <stdio.h>

int main()
{
	int cont=0;
	float gal,millas,sum,div,prom;



	while(1){
		printf("Introduce los galones de gasolina -1 para terminar\n");
		scanf("%f",&gal);
		if(gal == -1)
			break;
		printf("Introduce las millas manejadas\n");
		scanf("%f",&millas);
		div = millas / gal;
		printf("Los galones / millas del tanque son: %f\n",div);
		cont++;
		sum += div;
	}
	prom = sum/cont;
	printf("Las millas por galon de todos los tanques son: %f\n", prom);

	return 0;
}




