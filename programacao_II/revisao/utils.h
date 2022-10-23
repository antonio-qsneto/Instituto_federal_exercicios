#include<stdio.h>

typedef struct
{
        int numero;
        char rua[30];
        char cidade[30];
        char estado[20];
}end;


typedef struct
{
        end endereco;
        char nome[20];
        int idade;
        float salario;
}cadastro;


// Inserindo os lementos no array do tipo cadastro
void inserirElementos(cadastro p[]){
        for (int i = 0; i < 3; i++)
        {
                printf("\nEntre com %d nome: ", i+1);
                scanf("%[^\n]%*c", p[i].nome);
                printf("\nEntre com o idade: ");
                scanf("%d", &p[i].idade);
                printf("\nEntre com o salario: ");
                scanf("%f", &p[i].salario);

                printf("\nEntre com o numero da casa: ");
                scanf("%d", &p[i].endereco.numero);
                getchar();

                printf("Enter com a rua ");
                scanf("%[^\n]%*c", p[i].endereco.rua);

                printf("Enter com a cidade ");
                scanf("%[^\n]%*c", p[i].endereco.cidade);

                printf("Enter com a estado ");
                scanf("%[^\n]%*c", p[i].endereco.estado);
                
        }
}

// encontrando a maior idade dos cadastrados
void maiorIdade(cadastro p[]){
        int maiorIdade = 0, index=0;

        for (int i = 0; i < 3; i++)
        {
                if (p[i].idade > maiorIdade)
                {
                        maiorIdade = p[i].idade;
                        index = i;
                }
        }
        printf("\nA maior idade eh %d do usuario(a) %s", p[index].idade, p[index].nome);
}

//encontrando o maior salario dos cadastrados
void maiorSalario(cadastro p[]){
        int maiorSalario = 0, index=0;

        for (int i = 0; i < 3; i++)
        {
                if (p[i].salario > maiorSalario)
                {
                        maiorSalario = p[i].salario;
                        index = i;
                }
        }
        printf("\nO maior salario eh %.2f do usuario(a) %s", p[index].salario, p[index].nome);
}

// exibir todos os dados
void exibirDados(cadastro p[]){
        printf("\n***Dados Cadastrados***\n\n");

        for (int i = 0; i < 3; i++)
        {
                printf("----Dados pessoa %d----\n", i+1);
                printf("Nome: %s\n", p[i].nome);
                printf("idade: %d\n", p[i].idade);
                printf("Salario: %.2f\n", p[i].salario);
                printf("Numero casa: n%d\n", p[i].endereco.numero);
                printf("Rua: %s\n", p[i].endereco.rua);
                printf("Cidade: %s\n", p[i].endereco.cidade);
                printf("Estado: %s\n", p[i].endereco.estado);
                printf("\n\n");
        }
}
