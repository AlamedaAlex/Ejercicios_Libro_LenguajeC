#include<stdio.h>
int main(){
	int i,suma=0;
	printf("Suma de numero inpares comensando del 1 al 15 \n");
	printf("0 ");
	for(i=1;i<=15;i=i+1){
		if(i%2==0){
		continue;
	}
	printf("+ %d ",i);
		suma=i+suma;
	}
	printf("\n\n****************************************************");
	printf("\n\t El resultado es: %d\t",suma);
	return 0;
}
