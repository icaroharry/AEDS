#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[100];
    char nomeAbreviado[100];
    int flag = 1;
    int index=0;
    int i=0;
    printf("Digite o seu nome completo: ");
    for(i=0; i<100;i++){
        scanf("%c", &nome[i]);
        if(flag==1 && nome[i] <= 90 && nome[i]>= 65){
            nomeAbreviado[index] = nome[i];
            index++;
            nomeAbreviado[index] = '.';
            index++;
            flag=0;
        }
        if(flag==1 && nome[i] >= 97 && nome[i]<= 122){
            nomeAbreviado[index] = toupper(nome[i]);
            index++;
            nomeAbreviado[index] = '.';
            index++;
            flag = 0;
        }
        else if(nome[i]==32 || nome[i]==13 || nome[i] =='\n'){
            flag = 1;
        }
        if(nome[i]=='.' || nome[i]=='\n')
            break;

    }
    nomeAbreviado[index] = '\0';
    printf("\nObrigado sr(a) %s", nomeAbreviado);


    return 0;
}

