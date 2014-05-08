#include <stdio.h>
#include <stdlib.h>


void imprimeAsteriscos(int n){
     int i;
     for (i = 0; i < n; i++)
         printf("*");
     printf("\n");
}

void imprimeTriangulo(int i, int n){
     if(i<n) {
       imprimeAsteriscos(i);
       imprimeTriangulo(i+1, n); 
     }
     imprimeAsteriscos(i);
     if(i==n)
       return;        
}

int main(){
     imprimeTriangulo(1,50);
     return 0;  
}
