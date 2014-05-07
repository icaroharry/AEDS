#include <stdio.h>
#include <math.h>

void main(){
	const float rendimento = 0.006;
	float valor = 0;
	printf("Primeiro mes:\n");
	printf("Deposito de 1000 reais.\n\n");
	valor = 1000;
	printf("Segundo mes:\n");
	valor += valor*rendimento;	
	printf("Deposito de 800 reais.\n\n");
	valor += 800;
	printf("Terceiro mes:\n");
	valor += valor*rendimento;	
	printf("Saque de 500 reais.\n\n");	
	valor -= 500;
	printf("Quarto mes:\n");
	valor += valor*rendimento;
	printf("%f", valor);
	//system("pause");
}
