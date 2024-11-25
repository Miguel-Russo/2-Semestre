//Miguel Russo Lorente

#include <stdio.h>

typedef struct{ //Inicializando uma struct
	double peso; //Declaração de um variavel double responsavel por armazenar o peso.
	int idade; //Declaração de um variavel int responsavel por armazenar a idade.
	double altura; //Declaração de um variavel double responsavel por armazenar a altura.
} pessoa; //Nome dado a struct atrvés do "typedef", assim abreviando a estrutura de declaração de variaveis pertencentes a essa struct.

void imprimePessoa(pessoa p){ //função com retorno void, recebendo como parametro uma variavel do tipo pessoa.
	printf("Peso: %.1lf\nIdade: %i\nAltura: %.2lf\n\n\n", p.peso, p.idade, p.altura); //Impressão do peso, idade e altura, com todos os doubles sendo limitados a 2 casas decimais.
} // Fim da função.

void atribuirValor(pessoa p[]){ //função com retorno void, recebendo como parametro um array do tipo pessoa.
	int i; // Variavel declarada para servir como contadora no for.
	
	for(i = 0; i < 5; i++){ // Laço de repetição para andar por todo o array.
		printf("Informe o peso da %i° pessoa: ", i+1);
		scanf("%lf", &p[i].peso); //Scan o peso da pessoa i.
		printf("Informe a idade da %i° pessoa: ", i+1);
		scanf("%i", &p[i].idade); //Scan a idade da pessoa i.
		printf("Informe a altura da %i° pessoa: ", i+1);
		scanf("%lf", &p[i].altura); //Scan a altura da pessoa i.
		printf("\n\n");
	}
	
}


int main(){ //Inicio da main.
	pessoa pessoas[5], p1; //Declaração de variaveis do tipo pessoa.
	
	atribuirValor(pessoas);
	
	p1 = pessoas[0]; //Todas as informações de pessoas[0], agora tambem pertence a p1.
	
	if(p1.idade > 20){ //Condicional criada para verificar se a idade de p1 é maior do que 20.
		p1.idade++; //Adiciona mais 1 a variavel idade de p1 caso a condicional seja verdadeira.
	} //Fim da condicional.
	
	imprimePessoa(p1); //Imprime todas as informações de p1, sendo elas: Peso = 80.6, Idade = 41, Altura = 1.70.
	imprimePessoa(pessoas[0]); //Imprime todas as informações de pessoas[0], sendo elas: Peso = 80.6, Idade = 40, Altura = 1.70.
	imprimePessoa(pessoas[1]); //Imprime todas as informações de pessoas[1], sendo elas: Peso = 80.6, Idade = 40, Altura = 1.70.
	imprimePessoa(pessoas[2]); //Imprime todas as informações de pessoas[2], sendo elas: Peso = 0.0, Idade = 1, Altura = -1.#R. Capturando informações do lixo, por não terem sido declaradas.
	imprimePessoa(pessoas[3]); //Imprime todas as informações de pessoas[3], sendo elas: Peso = 0.0, Idade = 1, Altura = 0.00. Capturando informações do lixo, por não terem sido declaradas.
	imprimePessoa(pessoas[4]); //Imprime todas as informações de pessoas[4], sendo elas: Peso = 0.0, Idade = 67, Altura = 0.00. Capturando informações do lixo, por não terem sido declaradas.
	
	return 0;
}
