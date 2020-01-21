#include<stdio.h>
#include<windows.h>

int main(){
	Int NP,NS;
	scanf("%d",&NP);
	scanf("%d",&NS);
	if (NP==NS){
		printf("los numeros son iguales\n");
	}else{
		if (NP>NS){
			printf("el primer numero ingresado es el mayor\n")
		}else{
			printf("el segundo numero ingresado es el mayor\n")
		}
	}
	return 0;
}