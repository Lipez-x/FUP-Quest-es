#include <stdio.h>

_Bool stringIgual (char s1[], char s2[]);

int main () {

    char nome1[20];
    char nome2[20];
    char nomeC;
    char nomeD;
    int i = 0;
    int j = 0;

    do
    {
        nomeC = getchar();    
        nome1[i] = nomeC;
        ++i;
    } while (nomeC != '\n');

    do
    {
        nomeD = getchar();
        nome2[j] = nomeD;
        ++j;
    } while (nomeD != '\n');
    
    nome1[i - 1] = '\0';
    nome2[j - 1] = '\0';

    if (stringIgual(nome1, nome2))
    {
        printf("Igual véi\a");
    } else {
        printf("Aí cê me quebra eu\a");
    }

    return 0;

}

_Bool stringIgual (char s1[], char s2[]) {

    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return 1;
    } else {
        return 0;
    }
    
}