//Miguel Russo Lorente
#include <stdio.h>

int calcularResultado(int v[], int n); //Assinatura da função calcularResultado que tem como parametro um vetor do tipo int e um número int.

int main(){ //Inicio da main.
	int vetor[5], i, resultado; //Declaração de duas variaveis int, sendo uma um vetor de tamanho 5 e a outra um numero simples.
	
	for(i = 0; i < 5; i++){ //Laço de repetição criado para andor por todo o vetor.
		vetor[i] = i*2; //Cada elemento do vetor receberá o valor de i * 2.
	}// Fim do laço.
	
	resultado = calcularResultado(vetor, 5); //Atribuição na variavel "resultado" do retorno da função ao qual está indicando.
	
	printf("O resultado é: %i\n", resultado); //Mostrando o resultado final.
	
	return 0;
} //Fim da main.

int calcularResultado(int v[], int n){ //Desenvolvimento da função calcularResultado.
	int i, soma = 0; //Declaração de variaveis do tipo int, uma para função de contadora e outra para aramzenar o valor total da soma.
	
	for(i = 0; i < n; i++){ //Laço de repetição criado para andor por todo o vetor.
		soma += v[i]; //Todos o valores que foram declarados dentro do vetor declarado na main serão colocados dentro da variavel soma, somando um por um.
	} //Fim do laço.
	
	return soma; //Retorno da soma total de todos os elementos do vetor.
}
