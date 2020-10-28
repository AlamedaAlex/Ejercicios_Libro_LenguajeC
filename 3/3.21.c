//programa 3.21
//nomina bruta 
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int horas;
	float ganancia,total;

	while(1){

		printf("Introduce el numero de horas trabajadas \n");
		scanf("%i",&horas);
		if(horas == -1)
			break;

		printf("Lo que ganan por hora\n");
		scanf("%f",&ganancia);


		if(horas <= 40)
			total = ganancia * horas;
		else
			total = (ganancia * horas)+5;

		printf("El salario del trabajador es: %f\n",total);


	}




	return 0;
}