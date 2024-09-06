#include <stdio.h>

int main (){
    double preco_acao1=24.13;
    double preco_acao2=11.00;
    double preco_acao3=38.65;

    double dividendo_acao1=17.00;
    double dividendo_acao2=35.00;
    double dividendo_acao3=25.00;

    double dy_acao1= (dividendo_acao1/preco_acao1) * 100;
    double dy_acao2=(dividendo_acao2/ preco_acao2) * 100;
    double dy_acao3=(dividendo_acao3/ preco_acao3) * 100;

    printf("Dividend Yield da Acao 1: %.2f%%\n", dy_acao1);
    printf("Dividend Yield da Acao 2: %.2f%%\n", dy_acao2);
    printf("Dividend Yield da Acao 3: %.2f%%\n", dy_acao3);

    return 0;

}
