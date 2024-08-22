#include <stdio.h>
#include <limits.h>

int main()
{

    int vetor[5], maior = INT_MIN, menor = INT_MAX, soma;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }

        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    soma = maior + menor;
    printf("%d", soma);
}