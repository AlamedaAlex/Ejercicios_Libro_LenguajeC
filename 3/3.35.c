//ejercicio de palindromos 
//con numeros y cadenas
//lecctura de entero de 5 digitos
#include <stdio.h>
#include <math.h>

int elevar(int x,int pot);
int valido(int x);
int main(int argc, char const *argv[])
{
	



	int entero, arr[5],x;
	printf("Introduce el entero de 5 digitos\n");

	scanf("%d",&entero);



	if (valido(entero)==1){
		for (int j=4; j >= 0; j--)
		{
			x = entero / elevar(10,j);
			arr[4-j] = x % 10;  
		}
		for (int i = 0,j=4; i < 5; ++i,j--)
		{
			if(arr[i]!=arr[j]){
				printf("No ");
				break;
			}
		}
		printf("es un palindromo\n");

	}else{
		printf("Ese numero no es de 5 digitos\n");
	}
	return 0;
}


int elevar(int x,int pot){
	long cont=1;

	for (int i = 0; i < pot; ++i)
	{	
		cont *= x; 
	}

	return cont;
}

int valido(int x){
	if(1000000 < x ){
		return 0;
	}
	return 1;
}
