#include <stdio.h>

int main()
{
    char texto[100], chave[100], sinal;
    int j = 0;
    scanf("%[^\n]", texto);

    scanf(" %[^\n]", chave);

    scanf(" %c", &sinal);

    for (int i = 0; texto[i]; i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            int rotation = chave[j] - 'a';
            char c = texto[i];
            if (sinal == '+')
            {
                for (int i = 0; i < rotation; i++)
                {
                    c++;
                    if (c > 'z')
                        c = 'a';
                }
                printf("%c", c);
                j++;
            }
            else
            {
                for (int i = 0; i < rotation; i++)
                {
                    c--;
                    if (c < 'a')
                        c = 'z';
                }
                printf("%c", c);
                j++;
            }

            if (chave[j] == '\0')
            {
                j = 0;
            }
        }
        else
        {
            printf("%c", texto[i]);
        }
    }
}