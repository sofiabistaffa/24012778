#include <stdio.h>

int main (){
    float largura, altura, area, litrosTinta;
    int latasDeTinta;
    printf("digite a largura da parede (em metros): ");
    scanf("%f", &largura);
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    area= largura * altura;
    if(area<= 0){
    printf("As dimensoes da paredes sao invalidas.\n");
    return 1;
    }
    litrosTinta = area * 0.3;

    latasDeTinta = (int)ceil(litrosTinta / 2.0);

    printf("Voce precisará de %d lata(s) de tinta.\n", latasDeTinta);

    return 0;

}
