
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"

int main()
{
    int contador = 0;
    char nomes[3][50];
    int opcao;
    do
    {

        printf("\n========== GERENCIADOR DE NOMES ==========\n"
               "1. Adicionar nome\n"
               "2. Listar nomes (ordem de insercao)\n"
               "3. Listar nomes em ordem inversa\n"
               "4. Mostrar maior nome (mais caracteres)\n"
               "5. Contar letras 'a' ou 'A' em cada nome\n"
               "6. Trocar dois nomes de posicao\n"
               "0. Sair\n"
               "------------------------------------------\n"
               "Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 0:
            system("cls");
            printf("Saindo do Sistema...\n");
            break;
        case 1:
            system("cls");
            printf("Opcao 1 selecionada.\n\n");
            getchar();
            adicionarnome(nomes, &contador);
            break;
        case 2:
            system("cls");
            printf("Opcao 2 selecionada.\n");
            getchar();
            listarnome(nomes, contador);
            break;
        case 3:
            system("cls");
            printf("Opcao 3 selecionada.\n");
            getchar();
            nomes_inverso(nomes, contador);
            break;
        case 4:
            system("cls");
            printf("Opcao 4 selecionada.\n");
            getchar();
            contar_lertas(nomes, contador);
            break;
        case 5:
            system("cls");
            printf("Opcao 5 selecionadaa.");
            getchar();
            contar_lertas_a(nomes, contador);
            break;
        case 6:
            system("cls");
            printf("Opcao 5 selecionadaa.");
            getchar();
            trocanomes(nomes, contador);
            break;
        default:
            system("cls");
            printf("\n\n\nOpção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}