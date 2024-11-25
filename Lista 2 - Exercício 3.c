//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da função.
int Fibonacci(int X);

int main(){
	setlocale(LC_ALL, "Portuguese");
   
    int N, Res;
   
    printf("Informe até qual termo você gostaria de saber da sequência de Fibonacci: ");
    scanf("%i", &N);
   
    Res = Fibonacci(N);
   
    printf("Termo = %i\n", Res);

    return 0;
}

//Função responsável por calcular e retornar o elemento n da sequência de Fibonacci.
int Fibonacci(int X){
    int ult = 1, penul = 0, soma = 0, i;
   
    if(X == 1){
        return penul;
    }
    else if(X == 2){
        return ult;
    }
    else{
        for(i = 3; i <= X; i++){
            soma = ult + penul;
           
            penul = ult;
            ult = soma;
        }
       
        return soma;
    }
}
