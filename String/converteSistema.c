#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int n;
    char sistema[50];
    printf("Digite um número do sistema decimal: ");
    scanf("%d", &n);
    getchar();

    printf("Digite para qual sistema de numérico deseja converter: ");
    fgets(sistema, 50, stdin);

    sistema[strcspn(sistema, "\n")] = '\0';

    if (strcmp(sistema, "Hexadecimal") == 0)
    {
        printf("%x \n", n);
    } else if (strcmp(sistema, "Octal") == 0) {
        printf("%o \n", n);
    } else {
        printf("Erro");
    }
     
}