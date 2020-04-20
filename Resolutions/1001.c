#include <stdio.h>

/*
Funcao soma - Portugues
Function sum - English
*/
int sum (int a, int b){
    return a+b;
}

int main() {
    int a,b;

    /*
    Entrada de dados
    Data input
    */
    scanf("%d",&a);
    scanf("%d",&b);

    /*
    Saida de dados
    Data output
    */
    printf("%d\n",sum(a,b));

    return 0;
}
