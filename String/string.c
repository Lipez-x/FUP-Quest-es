#include <stdio.h>

int main()
{

    // Ao Declarar como uma string o compilador adiciona um caractere nulo (\0) para dizer que a string acabou.
    char palavra[] = "Brasil\0";
    printf("%s\n", palavra);

    char nome[20];
    scanf("%s", nome);

    int contador(char nome[]);

    int letras = contador(nome);
    int caracteres = letras + 1;
    printf("%d letras no nome %s e %d caracteres.", letras, nome, caracteres);
}

int contador(char string[])
{

    int contadorCaracteres = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        contadorCaracteres++;
    }

    return contadorCaracteres;
}