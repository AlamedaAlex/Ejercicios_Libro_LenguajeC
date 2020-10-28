#include<stdio.h>
int main(){
	int sum,prom,cont,i;
	i=0;
	cont=1;
	printf("Se calcula el promedio antes del 9999 \n");
	printf("Ingresa el entero: \n");
	for(cont=1;;cont++){
		printf("%d ._",cont);
		scanf("%d",&i);
	if(i==9999){
		break;
	}
	sum+=i;
}
    cont=cont-1;
	prom=sum/cont;
	printf("El promedi es: %d",prom);
	return 0;
}
