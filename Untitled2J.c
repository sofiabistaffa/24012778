#include <stdio.h>

int main (){
    int notas1, notas10, notas50, notas100, total;
    printf("Digite a quantidade de notas se 1 real: ");
    scanf("%d", &notas1);
    printf("Digite a quantidade de notas de 10 reais: ");
    scanf("%d", &notas10);
    printf("Digite a quantidade de notas de 50 reaias: ");
    scanf("%d", &notas50);
    printf("Digite a quantidade de notas de 100 reais: ");
    scanf("%d", &notas100);

    total= notas1 * 1 + notas10 * 10 + notas50 *50 + notas100 * 100;

    printf("O valor total em dinheiro �: %d reais\n", total);

    return 0;

}
