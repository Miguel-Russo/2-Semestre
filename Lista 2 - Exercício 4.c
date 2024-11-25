//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da Função.
int Somatorio(int X);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int N, Res;
   
    printf("Informe quantas vezes você gostaria de efetuar o somatório: ");
    scanf("%i", &N);
   
    Res = Somatorio(N);
   
    printf("Somatorio = %i\n", Res);
  
    return 0; 
}

//Função responsável por calcular o somatório total.
int Somatorio(int X){
    int i, Soma = 0;
   
    for(i = 1; i <= X; i++){
       
        Soma = Soma + (5 * (i*i) + 2 * i + 8);
    }
   
    return Soma;
}
