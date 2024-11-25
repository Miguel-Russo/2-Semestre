//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da função
int somaVetor(int A, int B, int C);

int main(){
	setlocale(LC_ALL, "Portuguese");
   
    int X, Y, Z, Res;
   
    printf("Informe o 1° número: ");
    scanf("%i", &X);
   
    printf("Informe o 2° número: ");
    scanf("%i", &Y);
   
    printf("Informe o 3° número: ");
    scanf("%i", &Z);
   
    Res = somaVetor(X, Y, Z);
   
    printf("Soma do vetor = %i\n", Res);
    
    return 0;
}

//Função responsável por somar todos os elementos de um vetor
int somaVetor(int A, int B, int C){
    int Vet[3] = {A, B, C};
    int i, Soma = 0;
   
    for(i = 0; i < 3; i++){
        Soma += Vet[i];
    }
   
    return Soma;
}

//Função responsável por realizar a soma entre dois números inteiros.
int Soma(int A, int B){
   
    return A + B;
}
