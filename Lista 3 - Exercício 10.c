//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
void maiorNumero(int num1, int num2);

int main(){
	int N1, N2;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &N1);
	
	printf("Informe o segundo número: ");
	scanf("%i", &N2);
	
	maiorNumero(N1, N2);
	
	return 0;
}

//Função responsável por exibir se os números são iguais ou se um é maior que o outro
void maiorNumero(int num1, int num2){
	
	if(num1 == num2){
		printf("\nOs números são iguais.\n");
	}
	else if(num1 > num2){
		printf("\nO primeiro número é o maior: %i\n", num1);
	}
	else{
		printf("\nO segundo número é o maior: %i\n", num2);
	}
	
}
