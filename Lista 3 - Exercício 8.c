//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
void exibirPares(int numero);

int main(){
	int N;
	
	printf("Informe um número: ");
	scanf("%i", &N);
	
	exibirPares(N);
	
	return 0;
}

//Função responsável por exibir todos os números pares maiores que 0 e menores ou iguais a n
void exibirPares(int numero){
	
	int i;
	
	for(i = 1; i <= numero; i++){
		if(i % 2 == 0){
			printf("%i\n", i);
		}
	}
	
}
