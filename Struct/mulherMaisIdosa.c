#include <stdio.h>
#include <string.h>

//Definição global da estrutura
struct gPessoas
{
    char nome [20];
    int idade;
    char sexo;
};

struct gPessoas maisVelha (struct gPessoas x[], int j);

int main (void) {

    int nPessoas;
    int m = 0;
    
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &nPessoas);
    struct gPessoas pessoas[nPessoas];

    for (int i = 0; i < nPessoas; i++)
    {
        printf("\nDigite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite o sexo da pessoa %d: ", i + 1);
        scanf(" %c", &pessoas[i].sexo);
        if (pessoas[i].sexo == 'f')
        {
            m++;
        }
    }

    struct gPessoas mulheres[m];
    int j = 0;

    for (int i = 0; i < nPessoas; i++)
    {
        if (pessoas[i].sexo == 'f')
        {
            mulheres[j++] = pessoas[i];
        }
    }

    struct gPessoas mulherVelha = maisVelha(mulheres, j);

    if (m != 0)
    {
        printf("A mais velha é a: %s\n", mulherVelha.nome);
    } else {
        printf("Não tem mulheres\n");
    }
}

struct gPessoas maisVelha (struct gPessoas x[], int j) {

    int index = 0;

    for (int i = 1; i < j; i++)
    {
        if (x[i].idade > x[i + 1].idade)
        {
            index = i;
        }
    }
    
    return x[index];
}
