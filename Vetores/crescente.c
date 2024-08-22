#include <stdio.h>

void crescente (int numero[], int n);

int main () {

    int limite;

    printf("Digite quantos números quer: ");
    scanf("%d", &limite);

    int numero[limite];

    for (int i = 0; i < limite; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
    }
    
    crescente(numero, limite);

    printf("Números na ordem crescente:\n");
    for (int i = 0; i < limite; i++)
    {
        printf("%d \n", numero[i]);
    }
    
}

void crescente (int vetor[], int n) {
    
    int storage;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[i] > vetor[j])
            {
                storage = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = storage;
            }
            
        }
        
    }
    
}