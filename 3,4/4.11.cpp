#include<stdio.h>
int main(){
	int a,i,min,x;
	printf("El primer numero determina la cantidad de valores ingresados: \n");
	printf("\n Ingresa el numero: \n");
	printf("1._ ");
	scanf("%d",&i);
	min=i;
	for(a=2;a<=i;a++){
		printf("%d._ ",a);
		scanf("%d",&x);
		if(x<=min){
			min=x;
		}
	}
	printf("El numero menor es: %d",min);
	return 0;
}
