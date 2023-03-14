#include<stdio.h>
#include<stdlib.h>

bool fibonacci(int x);

int main(void){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(fibonacci(num)){
        printf("O numero pertence a sequencia de fibonacci.");
    }
    else{
        printf("O numero nao pertence a sequencia de fibonacci");
    }
    return 0;
}

bool fibonacci(int x){
    int a, b, aux;
    a = 1;
    b = 1;
    if(x == 0 || x == 1){
        return true;
    }
    else{
        while(a < x){
            aux = a;
            a = a + b;
            b = aux;
            if(a == x){
                return true;
            }
        }
    }
    return false;
}
