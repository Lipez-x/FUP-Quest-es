#include <stdio.h>
#include <limits.h>

int main()
{

    int limite, menor = INT_MAX;
    scanf("%d", &limite);

    int vetor[limite];

    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("%d", menor);
}