#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta= b * b -4 * a *c;

    if(delta <0) {
      printf("A equacao nao posuui raizes reais.\n");
        } else{
            x1 = (-b + sqrt(delta)) / (2 *a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("As raizes da equacao sao: x1= %.2f, x2= %.2f\n", x1, x2);
        }

        return 0;
}
