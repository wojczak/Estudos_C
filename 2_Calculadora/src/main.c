#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void soma(int a, int b);
void subtrai(int a, int b);
void multipica(int a, int b);
void divide(int a, int b);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;

    do
    {
        puts("Digite a operacao desejada: \n");
        puts("1 - Soma\n"
             "2 - Subtracao\n"
             "3 - Multiplicacao\n"
             "4 - Divisao\n"
             "5 - Sair\n");
        scanf("%d", &opcao);
        system("cls || clear");

        switch (opcao)
        {
        case 1:
            soma(0, 0);
            break;
        case 2:
            subtrai(0, 0);
            break;
        case 3:
            multipica(0, 0);
            break;
        case 4:
            divide(0, 0);
            break;
        case 5:
            puts("Saindo...");
            break;
        default:
            puts("Opcao Invalida! Tente Novamente.");
            continue;
        }

    } while (opcao != 5);

    return 0;
}

void soma(int a, int b)
{
    puts("Voce escolheu a operacao de soma.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\n\n A soma de %d + %d e %d\n", a, b, a + b);
    puts("\n\nPressione Enter para continuar...");
    getchar();
    getchar();
    system("cls || clear");
}

void subtrai(int a, int b)
{
    puts("Voce escolheu a operacao de subtracao.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\n\nA subtracao de %d - %d e %d\n", a, b, a - b);
    puts("\n\nPressione Enter para continuar...");
    getchar();
    getchar();
    system("cls || clear");
}

void multipica(int a, int b)
{
    puts("Voce escolheu a operacao de multiplicacao.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\n\nA multiplicacao de %d X %d e %d\n", a, b, a * b);
    puts("\n\nPressione Enter para continuar...");
    getchar();
    getchar();
    system("cls || clear");
}
void divide(int a, int b)
{
    puts("Voce escolheu a operacao de divisao.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("\Digite o segundo numero: ");
    scanf("%d", &b);
    if (b == 0)
    {
        puts("\n\nDivisao por zero nao e permitida.\n\n");
        return;
    }
    printf("\n\nA divisao de %d / %d e %d\n", a, b, a / b);
    puts("\n\nPressione Enter para continuar...");
    getchar();
    getchar();
    system("cls || clear");
}