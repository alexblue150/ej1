#include <stdio.h>

float potencia(float, int);
int factorial(int);

int main(){
	float exponencial,x;
	int n,termino;
	scanf("%d",&n);
	scanf("%f",&x);
	exponencial=1;
	exponencial=exponencial+x;
	for(int i=1;i=n|i<n;i++){
		termino=potencia(x,i+1)/factorial(i+1);
		exponencial=exponencial+termino;
	}
	printf("%d",exponencial);
	return 0;
}

float potencia(float b, int e){
	float pot;
	pot=1;
	for(int i;i=e|i<e;i++)
		pot=pot*b;
	return pot;
}
int factorial(int n){
	int fac;
	fac=1;
	for(int i;i=n|i<n;i++)
		fac=fac*i;
	return fac;
}

