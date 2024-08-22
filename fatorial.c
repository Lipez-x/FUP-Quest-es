#include <stdio.h>

int main(void)
{

    int numero, resultado;
    int fatorial(int n);

    printf("Digite um número: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial do número digitado é: %d \n", resultado);
}

int fatorial(int n)
{

    int resultado;

    if (n == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = n * fatorial(n - 1); // Função recursiva - quando a função é chamada dentro dela mesma.
    }

    return resultado;
}