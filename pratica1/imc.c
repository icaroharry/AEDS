#include <stdio.h>
#include <math.h>


void imc(float alt, float pes){
    float imc = pes / pow(alt,2); //calcula imc
	float pesoIdeal; //var para armazenar o valor ideal do peso
	printf("O IMC eh: %f\n", imc);	
	if(imc > 25){
		pesoIdeal = pow(alt,2)*25; 
		printf("Para atingir o peso ideal, deve-se perder %fkg\n", (pes-pesoIdeal));
	}
	else{	
		if(imc < 18.5) {
			pesoIdeal = pow(alt,2)*18.5;
			printf("Para atingir o peso ideal, deve-se ganhar %fkg\n", (pesoIdeal-pes));
		}
	}
	
}

int main(){
	float pesoBrutus = 122, alturaBrutus = 1.84, imcBrutus;
	float pesoOlivia = 45, alturaOlivia = 1.76, imcOlivia;
	imc(alturaBrutus, pesoBrutus);
	imc(alturaOlivia, pesoOlivia);
	
		
		
	return 0;
}
