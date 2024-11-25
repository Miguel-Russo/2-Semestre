//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
void Maior(int v[], int tamanho);

int main(){
	int i, tam;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%i", &tam);
	
	int vet[tam];
	
	for(i = 0; i < tam; i++){
		printf("Informe o %i° valor do vetor: ", i + 1);
		scanf("%i", &vet[i]);
	}
	
	Maior(vet, tam);
	
	return 0;
}

//Função responsável por indicar o maior valor de um vetor e sua posição.
void Maior(int v[], int tamanho){
	int i, maior = v[0], pos = 0;
	
	for(i = 0; i < tamanho; i++){
		if(v[i] > maior){
			maior = v[i];
			pos = i;
		}
	}
	
	printf("Maior valor do vetor: %i\n", maior);
	printf("Posição do valor: %i\n", pos);
}
