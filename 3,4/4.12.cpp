#include<stdio.h>
int main(){
	int i,suma=0;
	printf("Suma de numero pares comensando del 2 al 30 \n");
	printf("0 ");
	for(i=2;i<=30;i=i+1){
		if(i%2==0){
		printf("+ %d ",i);
		suma=i+suma;
	}
	}
	printf("\n\n****************************************************");
	printf("\n\t El resultado es: %d\t",suma);
	return 0;
}
