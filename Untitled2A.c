#include <stdio.h>

int main (){
    int numeros[3];
    printf("Digite tres numeros: ");
    for (int i=0; i<3; i++){
        scanf("%d", &numeros[i]);
    }

    printf("A ordem inversa é: ");
    for(int i = 2; i >=0; i--)
    {
    printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;

}

