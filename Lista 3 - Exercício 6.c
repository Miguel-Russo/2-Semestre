//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
int soma(int v[], int t);

int main(){
	
	int tam, i;
	double media = 0, res;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%i", &tam);
	printf("\n");
	
	int vet[tam];
	
	for(i = 0; i < tam; i++){
	    printf("Informe o %i° valor: ", i+1);
		scanf("%i", &vet[i]);
	}
	
	res = soma(vet, tam);
	
	media = res/tam;
	
	printf("\nSoma = %.0lf\n", res);
	
	printf("Média = %.1lf", media);

	return 0;
}

//Função responsável por efetuar a soma de todos os elementos do vetor
int soma(int v[], int t){
	int i, s = 0;
	
	for(i = 0; i < t; i++){
		s = s + v[i];
	}
	
	return s;
}
