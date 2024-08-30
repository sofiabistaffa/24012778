#include <stdio.h>
#include <stdlib.h>

int main (){
    char NomeProduto[40];
    int quantia, opcao;
    float ValorUnitario, ValorTotal = 0, ValorDiario = 0;

    while(1){
        printf("\nDigite o Nome do Produto: ");
        scanf("%s", NomeProduto);

        printf("Digite a quantia vendida: ");
        scanf("%d", &quantia);

        printf("Digite o valor unitario do produto: ");
        scanf("%f", &ValorUnitario);

        ValorTotal = quantia * ValorUnitario;
        printf("Valor total da venda de %s: %.2f\n", NomeProduto, ValorTotal);

        ValorDiario = ValorDiario + ValorTotal;

        printf("\n1- Fazer outra venda\n" );
        printf("\n2- Encerrar o dia\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        if(opcao==2){
            printf("\n\nValor Total arrecadado no dia: %.2f\n", ValorDiario);
            break;
        }
    }

        return 0;

    }


