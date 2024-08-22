#include <stdio.h>

int main()
{
    int limite, contador = 0, iguais;
    scanf("%d", &limite);

    int especies[limite];

    for (int i = 0; i < limite; i++)
    {
        scanf("%d", &especies[i]);
    }

    for (int i = 0; i < limite; i++)
    {
        iguais = 0;
        for (int j = i + 1; j < limite; j++)
        {
            if (especies[i] == especies[j])
            {
                iguais++;
            }
        }

        if (iguais == 0)
        {
            contador++;
        }
    }

    printf("\n%d", contador);
}