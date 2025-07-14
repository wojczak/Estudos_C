#include <stdio.h>
#include <string.h>
#include "utils.h"
#include <stdlib.h>

void adicionarnome(char nomes[][50], int *contador)

{

    if (*contador >= 3)
    {
        system("cls");
        printf("Limite de nomes atingido.\n");
        puts("Pressione Enter para continuar...");
        getchar();
        system("cls");
        return;
    }
    printf("Digite o nome %d: \n\n", *contador + 1);
    fgets(nomes[*contador], 50, stdin);                       // Lê até 49 caracteres + '\0'
    nomes[*contador][strcspn(nomes[*contador], "\n")] = '\0'; // Remove o caractere de nova linha
    (*contador)++;                                            // Incrementa o contador de nomes
    puts("\n\nNome adicionado com sucesso!\n");
    puts("Pressione Enter para continuar...");
    getchar();
    system("cls");
}

void listarnome(char nomes[][50], int contador)
{
    if (contador == 0)
    {
        printf("\nNenhum nome foi adicionado.\n");
        getchar();
        system("cls");
        return;
    }
    printf("\nLista de nomes:\n\n");
    for (int i = 0; i < contador; i++)
    {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }
    puts("\n\nPressione Enter para continuar...");
    getchar();
    system("cls");
}

void nomes_inverso(char nomes[][50], int contador)
{
    if (contador == 0)
    {
        printf("\nNenhum nome foi adicionado.\n");
        getchar();
        system("cls");
        return;
    }
    printf("\nLista de nomes:\n\n");
    for (int i = contador - 1; i >= 0; i--)
    {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }
    puts("\n\nPressione Enter para continuar...");
    getchar();
    system("cls");
}

void contar_lertas(char nomes[][50], int contador)
{

    if (contador == 0)
    {
        printf("\nNenhum nome foi adicionado.\n");
        getchar();
        system("cls");
        return;
    }
    printf("\nContagem de letras em cada nome:\n\n");

    for (int i = 0; i < contador; i++)
    {
        printf("Tamanho do nome %s: %zu\n", nomes[i], strlen(nomes[i]));
    }
}

void contar_lertas_a(char nomes[][50], int contador)

{
    if (contador == 0)
    {
        printf("\nNenhum nome foi adicionado.\n");
        getchar();
        system("cls");
        return;
    }
    printf("\nContagem de letras a ou A em cada nome:\n\n");

    for (int i = 0; i < contador; i++)
    {
        int cont_a = 0;

        for (int j = 0; nomes[i] != '\0'; j++)
        {
            if (nomes[i][j] == 'a' || nomes[i][j] == 'A')
            {
                cont_a++; // soma 1 se for 'a' ou 'A'
            }
        }
        printf("A quantidade de Letras a ou A no nome %s: e %zu\n", nomes[i], cont_a);
    }
}

void sup_troca_nomes(char nome1[50], char nome2[50])
{
    char tmp[50];
    strcpy(tmp, nome1);
    strcpy(nome1, nome2);
    strcpy(nome2, tmp);
}

void trocanomes(char nomes[][50], int contador)
{
    if (contador < 2)
    {
        printf("Precisa ter 2 Nomes Cadastrados.");
        return;
    }
    puts("Nomes com Indices;");
    for (int i = 0; i < contador; i++)
    {
        printf("[%d] %s\n", i, nomes[i]);
    }
    int n1, n2;
    printf("Digite o Primeiro Indice: ");
    if (scanf("%d%*c", &n1) != 1 || n1 < 0 || n1 >= contador)
    {
        puts("Entrada Invalida");
        return;
    }
    printf("Digite o Segundo Indice: ");
    if (scanf("%d%*c", &n2) != 1 || n2 < 0 || n2 >= contador)
    {
        puts("Entrada Invalida");
        return;
    }
    if (n1 == n2)
    {
        puts("Indices Iguais, nada a trocar");
        return;
    }

    sup_troca_nomes(nomes[n1], nomes[n2]);
    printf("Nomes trocados: [%d] <->[%d]", n1, n2);
}
