#include <stdio.h>

int main(){
    float P, V, T, M;

    printf("Digite a pressao (P): ");
    scanf("%f", &P);
    printf("Digite o volume (V): ");
    scanf("%f", &V);
    printf("Digite a temperatura(T) em Celsius: ");
    scanf ("%f", &T);

    M= (P * V)/ (0.37 * (T + 460));

    printf("A massa de ar no pneu é: %.2f\n", M);

    return 0;

}
