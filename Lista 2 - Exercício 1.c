//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura das funções
int Primo(int X);
int somaPrimo(int Y);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int N, Res;
   
    printf("Informe quantos números primos sequencias serão somados: ");
    scanf("%i", &N);
   
    Res = somaPrimo(N);
   
    printf("Soma total: %i", Res);
   
   

    return 0;
}

// Função responsável por definir quais números são primos.
int Primo(int X){
    int i, cont = 0;
   
    for(i = X; i >= 1; i--){
        if(X % i == 0){
            cont += 1;
        }
    }
   
    if(cont == 2){
        return 1;
    }
    else{
        return 0;
    }
}

//Função responsável por efetuar a soma de todos os n primeiros números primos.
int somaPrimo(int Y){
    int cont = 1;
    int i = 2;
    int soma = 0;
   
    while(cont <= Y){
        if(Primo(i)){
            cont = cont + 1;
            soma = soma + i;
        }
       
        i++;
    }
   
    return soma;
}
