#include <stdio.h>
int main (){
    char nome [50];
    int idade, diasDeVida;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    diasDeVida = idade * 365;

    printf("%s, Voce viviu aproximadamente %d dias. \n", nome, diasDeVida);

    return 0;

}
