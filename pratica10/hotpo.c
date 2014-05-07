#include <stdio.h>


int hotpo(int n){
	printf("%d ", n);
	
	if(n==1)
		return 1; 
	if(n%2==0)
		n /= 2;
	else
		n = (n*3 + 1);
	return 1 + hotpo(n);


}

void main(){
	int n = 5;
	printf("%d", hotpo(n));

}