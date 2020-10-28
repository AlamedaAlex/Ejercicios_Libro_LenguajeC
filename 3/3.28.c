#include <stdio.h>


int main()
{
	int pass=0, fail =0, stud=1,result;


	while(stud <= 10 ){
		do{
			printf("Introduce el resultado (1 paso 2 reprobo) para el estudiante %i\n",stud);
			scanf("%d",&result);
		}while(result != 1 && result != 2 );

		if(result == 1)
			pass++;
		else 
			fail++;

		stud++;
	}

	printf("Los estudiantes que pasaron son: %d\n",pass);

	printf("Los estudiantes que reprobaron son: %d\n",fail);

	return 0;
}