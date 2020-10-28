#include<stdio.h> 
int main(){ 
	int num,temp,r; 
	printf("\t\tFactorial del 1 al 15\t\t \n\n"); 
	for(num=1;num<=15;num++){
	r=num; 
	for(temp=num-1;temp>=1;temp--){ 
			r=r*temp;  
	}
	printf("El factorial de %d es: \t%d\t \n", num,r);
}
	return 0; 
} 
