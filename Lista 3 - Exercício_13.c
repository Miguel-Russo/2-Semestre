//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
float calcularMedia(double num1, double num2, double num3);

int main(){

    int N1, N2, N3;
    float Res;

    printf("Informe o primeiro número: ");
    scanf("%i", &N1);

    printf("Informe o segundo número: ");
    scanf("%i", &N2);

    printf("Informe o terceiro número: ");
    scanf("%i", &N3);

    Res = calcularMedia(N1, N2, N3);

    printf("\nMedia dos tres números: %.2f\n", Res);

    return 0;
}

//Função responsável retornar a média dos números
float calcularMedia(double num1, double num2, double num3){

    return(num1 + num2 + num3)/3;
}
