#include <stdio.h>
int main()
{
	int num;
	float si,ca,cr,li,sn,ba;
	while(num>=0){
		printf("Introduce el numero de cuenta del cliente (-1 para terminar): \n");
		scanf("%d",&num);
		if(num== -1){
		}
		else{
		printf("Introduce el saldo inicial: \n");
		scanf("%f",&si);
		printf("Introduce el total de cargos: \n");
		scanf("%f",&ca);
		printf("Introduce el total de credito: \n");
		scanf("%f",&cr);
		printf("Introduce el limite de credito: \n");
		scanf("%f",&li);
		sn =si+ca-cr;
		ba=si+cr;
		if(sn>li)
			printf("\n Cuenta %d \nLimite de creditos %f \nBalance %f \n \t******* Limite de creditos exedido *******\t \n");
			
	}
}
	return 0;
}




