#include <stdio.h>

int main(){
    int primeiroTermo, razao, N, enesimoTermo;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiroTermo);
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);
    printf("DIgite o termo N que deseja calcular: ");
    scanf("%d", &N);

    enesimoTermo = primeiroTermo + (N-1)*razao;

    printf("0 %d-ésimo termo da PA é: %d\n", N, enesimoTermo);

    return 0;

}
