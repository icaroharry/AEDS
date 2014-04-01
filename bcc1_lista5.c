// Eugênio Pacceli Reis da Fonseca
// 31/03/2014
// deprecated

void decrescente(int a, int b, int c){
	int *nums = {a,b,c};
	int aux;

	for(int i = 1; i < 3; i++){
		maior = i;
		for(int j = i+1; j < 3; i++){
			if(nums[j] > nums[maior]){
				maior = j;
			}
		}
		if(maior != i){
			aux = nums[i];
			nums[i] = nums[maior];
			nums[maior] = aux;
		}

	}

	for(int i = 1; i < 3; i++){
		printf("%d ",nums[i]);
	}	

}

int negativos(int n, int vet[]){
	int count = 0;

	for(int i = 0; i < n; i++){
		if(vet[i] < 0){
			count++;
		}
	}

	return count;
}

int pares(int n, int vet[]){
	int count = 0;

	for(int i = 0; i < n; i++){
		if(vet[i] % 2 == 0){
			count++;
		}
	}

	return count;
}

int maiores(int n, int vet[], int x){
	int count = 0;

	for(int i = 0; i < n; i++){
		if(vet[i] > x){
			count++;
		}
	}

	return count;
}

int somatorios(int n, int v[], int w[]){
	w[0] = v[0];
	for(int i = 1; i < n; i++){
		w[i] = v[i] + w[i-1];
	}	

	return n;
}

int raizes(double a,double b, double c, double *raiz1, double *raiz2){
	int numraizes = 0;
	
	double delta = pow(b,2) - 4*a*c;
	
	if(delta > 0 && a != 0){
		*raiz1 = (-1*b + sqrt(delta))/(2*a);
		*raiz2 = (-1*b - sqrt(delta))/(2*a);
		numraizes = 2;
	}else if(a == 0){
		*raiz1 = (-1*c)/b;
		numraizes = 1;
	}else{ // Delta é 0
		*raiz1 = (-1*b + sqrt(delta))/(2*a);
		numraizes = 1;
	}
	
	return numraizes;
	
}
