#include <stdio.h>
#define PI 3.13159

int main (){
    float raio, area;

    printf("Digite o raio do ciculo: ");
    scanf("%f", &raio);

    area= PI * raio;

    printf("A area do circulo é: %.2f\n", area);

    return 0;
}
