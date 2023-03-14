#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    double estados[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    char nomes[5][7] = {"SP", "RJ", "MG", "ES", "OUTROS"};
    double total = 0;
    for(i = 0; i < 5; i++){
        total += estados[i];
    }
    for(i = 0; i < 5; i++){
        estados[i] = (estados[i]/total)*100;
        printf("%s - %.2lf%%\n", nomes[i], estados[i]);
    }
    return 0;
}
