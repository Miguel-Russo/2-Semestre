//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da função
int Soma(int A, int B);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int X, Y, Res;
   
    printf("Informe o primeiro valor para soma: ");
    scanf("%i", &X);
   
    printf("Informe o segundo valor para soma: ");
    scanf("%i", &Y);
   
    Res = Soma(X, Y);
   
    printf("Soma = %i\n", Res);
    
    return 0;
}

//Função responsável por realizar a soma entre dois números inteiros.
int Soma(int A, int B){
   
    return A + B;
}
