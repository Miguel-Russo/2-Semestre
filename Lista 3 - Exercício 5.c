//Miguel Russo Lorente
#include <stdio.h>

//Assinatura da função
void impares(int n);

int main(){
	int X;
	
	printf("Digite um número: ");
	scanf("%i", &X);
	
	impares(X);
	
	return 0;
}

//Função responsável por escrever todos o números impares maiores que zero e menores ou igual a n.
void impares(int n){
	int i;
	
	for(i = 0; i <= n; i++){
		if(i % 2 != 0){
			printf("%i\n", i);
		}
	}
}
