#include <stdio.h>
#include <math.h>

int inverte(int n){
	if(n<=1)
		return 1;
	else {
		printf("%d", (n%10));
		//printf("\n\n%d", (int)(n/10));
	}
	return inverte((int)(n/10));
		 
}

void main(){

	//printf("%d", (123/10));
	printf("%d", inverte(123));
}