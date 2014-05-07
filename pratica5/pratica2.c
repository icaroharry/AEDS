#include <math.h>
#include "pratica2.h"

float paraMetrosPorSegundo(float v) {
	return v/3.6;
}

float areaCirculo(float raio){
	return 3.141592*pow(raio,2);
}

int ehPar(int n){
	int x;
	if(n%2==0)
	  x=1;
	else
	  x=0;
	return x;
}

int ehDivisivelPor3ou5(int n){
	if((n%3 == 0 && n%5 == 0) || (n%3 != 0 && n%5 != 0)){
		return 0;
	}
	else{
		return 1;
	}
}

float pesoIdeal(float h, char sexo){
	float PI;
	if(sexo=='M'){
		PI = (72.7*h)-58;
	}
	if(sexo=='F'){
		PI = (62.1*h)-44.7;
	}
	return PI;
}

float calculaMedia(int x, int y, int z, int operacao){
	switch(operacao){
		case 1: return pow((float)(x*y*z), (1.0/3.0));
		case 2: return (x + 2*y + 3*z)/6.0;
		case 3: return 3/((1/(float)x)+(1/(float)y)+(1/(float)z));
		case 4: return ((float)x+(float)y+(float)z)/3;
	}
}

int somaImpares(int N){
	int i, r=0;
	for (i = 0; i <= N; i++){
		if(i%2!=0)
			r+=i;
	}
	return r;
}

double fatorial(int N){
	double r=1;
	int i = 0;
	for(i = N; i > 1; i--){
		r *= i;
	}
	return r;
}

int somaNumerosDiv3ou5(int N){
	int r = 0;
	int i = 0;
	for(i = 0; i <= N; i++){
		if(ehDivisivelPor3ou5(i) == 1)
			r+=i;
	}
	return r;
}

int numeroDivisores(int N){
	int r = 0;
	int i = 0;
	for(i = 1; i <= N; i++){
		if(N%i == 0)
			r++;
	}
	return r;
	
}

int enesimoFibonacci(int N){
	int soma = 0 , n1 = 0, n2 = 1, i = 0;
	
	for(i = 2; i < N; i++){
		soma = n1 + n2;
		n1 = n2;
		n2 = soma;
	}
	return soma;
}

