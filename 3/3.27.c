#include <stdio.h>


int main()
{


	long cont,num,max, smax , band;
	cont=num=max=smax=band=0;

	for (int i = 0; i < 10; ++i)
	 {


	 	printf("Introduce el numero %i\n",i+1);
	 	scanf("%d",&num);


	 	if(num>smax){
	 		if(num>max){
	 			smax = max;
	 			max = num;
	 		}else{
	 			smax = num;
	 		}
	 	}

	 } 

	 printf("El numero mayor es %i el segundo numero mayor es %i\n", max,smax);

	return 0;
}