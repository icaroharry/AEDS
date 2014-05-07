#include <stdio.h>

int mdc(int x, int y){
	int mdc = 1, menor = 0, maior = 0;
	if(x > y){
		maior = x;
		menor = y;
	}
	else{
		maior = y;
		menor = x;
	}
	while(maior > menor) {
		maior -= menor;
	}
	int i = 0;
	for(i = menor; i > 1; i--){
		if(maior % i == 0 && menor % i ==0){
			mdc = i;
			break;
		}
	}
	return mdc;	

}

int main(){
	int x, y;
	printf("Digite os valores para calcular o MDC: ");
	scanf("%d %d", &x, &y);
	printf("%d", mdc(x, y));
	return 0; 
}
