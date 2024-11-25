//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
int menorNumero(int num1, int num2, int num3);

int main(){
	int N1, N2, N3, Menor;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &N1);
	
	printf("Informe o segundo número: ");
	scanf("%i", &N2);
	
	printf("Informe o terceiro número: ");
	scanf("%i", &N3);
	
	Menor = menorNumero(N1, N2, N3);
	
	printf("Menor número: %i\n", Menor);

	return 0;
	
}

//Função responsável por retornar o menor número entre os 3
int menorNumero(int num1, int num2, int num3){
	
	if(num1 < num2 && num1 < num3){
		return num1;
	}
	else if(num2 < num1 && num2 < num3){
		return num2;
	}
	else{
		return num3;
	}
	
}
