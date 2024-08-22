#include <stdio.h>

int main()
{

    int numero, divisor = 1, digitos = 0, algarismo;
    scanf("%d", &numero);

    while (divisor <= numero)
    {
        digitos++;
        divisor *= 10;
    }

    int vetor[digitos];

    divisor = 10;

    for (int i = 0; i < digitos; i++)
    {
        algarismo = numero % divisor;
        vetor[i] = algarismo;
        numero /= 10;
    }

    for (int i = 1; i <= digitos; i++)
    {
        if (i == digitos)
        {
            printf("%d", vetor[digitos - i]);
        }
        else
        {
            printf("%d ", vetor[digitos - i]);
        }
    }
}