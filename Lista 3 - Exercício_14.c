//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
int calcularResultado(int S, int P, int U);

int main(){

    int vet[10], soma = 0, i, prim, ult, res;

    for(i = 0; i < 10; i++){
        vet[i] = i + 1;
        soma = soma + vet[i];

        if(i == 0){
            prim = vet[i];
        }
        else{
            ult = vet[i];
        }

    }

    res = calcularResultado(soma, prim, ult);

    printf("Resultado = %i\n", res);

    return 0;
}

//Função responsável por efetuar a operação
int calcularResultado(int S, int P, int U){

    return S + (P * 5) + (U * 2);
}
