#include <stdio.h>

int main(){
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0/9.0);

    printf("Atemperatura em Celsius é: %.2f\n", celsius);

    return 0;

}
