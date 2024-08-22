#include <stdio.h>

int main()
{
    int limite;
    double soma = 0, media;
    scanf("%d", &limite);

    double hSoldados[limite];
    for (int i = 0; i < limite; i++)
    {
        scanf("%lf", &hSoldados[i]);
        soma += hSoldados[i];
    }

    media = soma / limite;

    printf("%.2f\n", media);

    for (int i = 0; i < limite; i++)
    {
        if (hSoldados[i] < media)
        {
            printf("P ");
        }
        else if (hSoldados[i] > media)
        {
            printf("G ");
        }
        else
        {
            printf("M ");
        }
    }
}