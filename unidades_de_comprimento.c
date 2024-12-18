#include <stdio.h>  // Biblioteca padrão para entrada e saída
#include <stdlib.h> // Biblioteca para funções do sistema, como 'system("cls")'

int main() {
    float valor;  // Variável para armazenar o valor de entrada
    int opcao;    // Variável para a unidade de medida
    char continuar; // Variável para controlar a continuidade do programa

    do {
        // Limpa a tela para melhorar a visualização
        system("cls");  

        // Entrada do valor
        printf("=== Conversor de Medidas ===\n");
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        // Pergunta a unidade de medida desejada
        printf("\nEscolha a unidade de medida para a conversao:\n");
        printf("1 - Metro para Centimetro e Milimetro\n");
        printf("2 - Centimetro para Metro e Milimetro\n");
        printf("3 - Milimetro para Metro e Centimetro\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        // Realiza a conversão conforme a escolha do usuário
        switch (opcao) {
            case 1:
                printf("\n%.2f metros equivalem a:\n", valor);
                printf("%.2f centimetros\n", valor * 100);
                printf("%.2f milimetros\n", valor * 1000);
                break;
            case 2:
                printf("\n%.2f centimetros equivalem a:\n", valor);
                printf("%.2f metros\n", valor / 100);
                printf("%.2f milimetros\n", valor * 10);
                break;
            case 3:
                printf("\n%.2f milimetros equivalem a:\n", valor);
                printf("%.2f metros\n", valor / 1000);
                printf("%.2f centimetros\n", valor / 10);
                break;
            default:
                printf("\nOpcao invalida! Por favor, escolha entre 1, 2 ou 3.\n");
                break;
        }

        // Pergunta ao usuário se deseja continuar ou encerrar o programa
        printf("\nDeseja fazer outra conversao? (S para sim / N para nao): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');  // Repete o programa se o usuário digitar 'S'

    printf("\nPrograma encerrado. Obrigado!\n");
    return 0;  // Encerra o programa com sucesso
}
