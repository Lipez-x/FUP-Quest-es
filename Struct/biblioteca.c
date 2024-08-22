#include <stdio.h>
#include <string.h>

struct Cliente
{
    int id;
    char nome[50];
    int idade;
    int cpf;
};

struct Livro
{
    int id;
    int idCliente;
    char nome[50];
};

int main()
{

    int nClientes;

    printf("Digite a quantidade de clientes que deseja inserir: ");
    scanf("%d", &nClientes);
    getchar();

    struct Cliente cliente[nClientes];

    for (int i = 0; i < nClientes; i++)
    {
        cliente[i].id = i + 1;
        printf("Digite o nome do cliente %d: ", i + 1);
        fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin);
        printf("Digite a idade do cliente %d: ", i + 1);
        scanf("%d", &cliente[i].idade);
        printf("Digite o CPF do cliente %d: ", i + 1);
        scanf("%d", &cliente[i].cpf);
        getchar();
    }

    printf("----------------------------------------------");
}