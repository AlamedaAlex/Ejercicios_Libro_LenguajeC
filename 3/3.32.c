#include <stdio.h>


int main()
{

	int x,y;

	printf("Salida A)\n");
	x=5;
	y=8;

	if (y == 8)
		if (x == 5)
			printf ( "@@@@@\n") ;
	else
	printf ("#####\n");
	printf("$$$$$\n");
	printf ("&&&&&\n");

	printf("Salida B)\n");
	x=5;
	y=8;

	if (y == 8)
		if (x == 5)
			printf ( "@@@@@\n") ;
	else{
		printf ("#####\n");
		printf("$$$$$\n");
		printf ("&&&&&\n");
	}

	printf("Salida C)\n");
	x=5;
	y=8;

	if (y == 8)
		if (x == 5)
			printf ( "@@@@@\n") ;
	else{
		printf ("#####\n");
		printf("$$$$$\n");
	}
	printf ("&&&&&\n");



	printf("Salida D)\n");
	x=5;
	y=7;

	if (y == 8){
		if (x == 5)
			printf ( "@@@@@\n") ;
	}
	else{
		printf ("#####\n");
		printf("$$$$$\n");
		printf ("&&&&&\n");
	}

	return 0;
}