//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da função
int Maior(int A, int B);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int X, Y, Res;
   
    printf("Informe o 1° número: ");
    scanf("%i", &X);
   
    printf("Informe o 2° número: ");
    scanf("%i", &Y);
   
    Res = Maior(X, Y);
   
    printf("Maior número: %i\n", Res);
    
    return 0;
}

//Função responsável por retornar o maior número
int Maior(int A, int B){
   
    if(A > B){
        return A;
    }
    else{
        return B;
    }
}
