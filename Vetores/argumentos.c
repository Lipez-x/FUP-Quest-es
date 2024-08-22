#include <stdio.h>

int main () {
    
    int x = 10;
    int vetor [2] = {10};

    void function (int x, int vetor[]);
    function(x, vetor); // O x é passado apenas como parâmetro, como se fosse uma cópia da variável original
    // O vetor tem seus endereços passados como parâmetro, por isso ao ser alterado na função também modifica no original.
    printf("Valor x na main: %d \n", x);
    printf("Valor vetor 1 na main: %d \n", vetor[1]);
}

void function (int x, int vetor[]) {

    x = x + 10;
    vetor[1] = 20;

    printf("Valor x na função: %d \n", x);
    printf("Valor vetor 1 na função: %d \n", vetor[1]);
}