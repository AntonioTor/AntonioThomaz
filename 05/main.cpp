#include<stdio.h>
#include<stdlib.h>

int retornaTam(char *v);

int main(void)
{
    char texto[30];
    int i;
    printf("Digite um texto: ");
    scanf(" %[^\n]", &texto);
    int j = retornaTam(texto);
    printf("Texto invertido: ");
    for(i=0; i < j; i++){
        printf("%c", texto[j-i-1]);
    }

    return 0;
}

int retornaTam(char *v){
    int i;
    for(i=0; v[i]!='\0'; i++);
    return i;
}
