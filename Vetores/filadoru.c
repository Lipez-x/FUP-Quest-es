#include <stdio.h>

int main()
{
    int limite;
    scanf("%d", &limite);

    int pessoas[limite];

    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &pessoas[i]);
    }

    for (int i = 0; i < limite; i++)
    {
        if (pessoas[i] % 2 != 0)
        {
            printf("%d", pessoas[i]);
        }
    }

    printf("\n");

    for (int i = 0; i < limite; i++)
    {
        if (pessoas[i] % 2 == 0)
        {
            printf("%d ", pessoas[i]);
        }
    }
}