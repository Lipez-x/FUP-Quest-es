#include <stdio.h>
#include <stdbool.h>

struct dicionario
{
    char palavra[20];
    char definicao[50];
};

int main()
{

    int procuraString(const struct dicionario portugues[], const char palavra[], const int nPalavras);

    const int NDEFS = 5;
    char palavra[20];
    int pesquisa;

    const struct dicionario portugues[] =
        {{"faca", "objeto cortante"},
         {"chinelo", "vestimenta do pe"},
         {"caderno", "um monte de papel junto"},
         {"cadeia", "um lugar"},
         {"luz", "camera e acao"}};

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    pesquisa = procuraString(portugues, palavra, NDEFS);

    if (pesquisa == -1)
    {
        printf("Palavra não encontrada!");
    }
    else
    {
        printf("%s: %s", portugues[pesquisa].palavra, portugues[pesquisa].definicao);
    }
}

bool comparaString(const char p1[], const char p2[])
{

    int i = 0;

    while (p1[i] == p2[i] && p1[i] != '\0' && p2[i] != '\0')
    {
        i++;
    }
    if (p1[i] == '\0' && p2[i] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
};

int procuraString(const struct dicionario portugues[], const char palavra[], const int nPalavras)
{

    bool comparaString(const char p1[], const char p2[]);

    int i = 0;

    while (i < nPalavras)
    {
        if (comparaString(palavra, portugues[i].palavra))
        {
            return i;
        }
        else
        {
            i++;
        }
    };
    return -1;
}
