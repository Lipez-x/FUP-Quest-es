#include <stdio.h>
#include <string.h>

    struct cliente //Definição da estrutura
    {
        char nome[50];
        int idade;
        float altura;
    };

int main () {

    struct cliente functionStruct (struct cliente x);
    struct cliente c1; //Declaração da estrutura

    //Inicialização das variáveis de uma estrutura, podem ser manipuladas da mesma forma que uma variável comum
    strcpy(c1.nome, "Felipe");
    c1.idade = 17;
    c1.altura = 1.65;

    c1 = functionStruct(c1);

    printf("Nome do Cliente 1: %s \n", c1.nome);
    printf("Idade do cliente 1: %d \n", c1.idade);
    printf("Altura do Cliente 1: %.2f \n", c1.altura);
}

struct cliente functionStruct(struct cliente x) {

    x.idade += 1;
    x.altura += 0.1;
    strcpy(x.nome, "Antonio Felipe");

    return x;
}

