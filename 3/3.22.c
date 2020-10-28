//programa 3.22
//Diferencia entre predecrementar y post decrementar
#include <stdio.h>
int main(int argc, char const *argv[])
{

	int x = 3,y=0;






	printf("valor inicial de x %i valor incial de y %i\n",x,y);

	printf("Utilizando el post decremento y = x--\n");
	y = x--;
	printf("Valor de y es : %i\n",y);



	printf("Haciendo x = 3");
	x = 3;
	printf("Utilizando el post decremento y = --x\n");
	y = --x;
	printf("Valor de y es : %i\n",y);



	return 0;
}