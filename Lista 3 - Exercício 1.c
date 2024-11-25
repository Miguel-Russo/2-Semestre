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


int main(){ //Inicio da main.
	pessoa pessoas[5], p1; //Declaração de variaveis do tipo pessoa.

	pessoas[0].peso = 80.6; //Atribuindo valor a varivel peso da primeira pessoa do vetor pessoas[5].
	pessoas[0].idade = 40; //Atribuindo valor a varivel idade da primeira pessoa do vetor pessoas[5].
	pessoas[0].altura = 1.70; //Atribuindo valor a varivel altura da primeira pessoa do vetor pessoas[5].

	p1 = pessoas[0]; //Todas as informações de pessoas[0], agora tambem pertence a p1.

	if(p1.idade > 20){ //Condicional criada para verificar se a idade de p1 é maior do que 20.
		p1.idade++; //Adiciona mais 1 a variavel idade de p1 caso a condicional seja verdadeira.
	} //Fim da condicional.

	pessoas[1] = pessoas[0]; //Todas as informações de pessoas[0], agora tambem pertence a pessoas[1].
	imprimePessoa(p1); //Imprime todas as informações de p1, sendo elas: Peso = 80.6, Idade = 41, Altura = 1.70.
	imprimePessoa(pessoas[0]); //Imprime todas as informações de pessoas[0], sendo elas: Peso = 80.6, Idade = 40, Altura = 1.70.
	imprimePessoa(pessoas[1]); //Imprime todas as informações de pessoas[1], sendo elas: Peso = 80.6, Idade = 40, Altura = 1.70.
	imprimePessoa(pessoas[2]); //Imprime todas as informações de pessoas[2], sendo elas: Peso = 0.0, Idade = 1, Altura = -1.#R. Capturando informações do lixo, por não terem sido declaradas.
	imprimePessoa(pessoas[3]); //Imprime todas as informações de pessoas[3], sendo elas: Peso = 0.0, Idade = 1, Altura = 0.00. Capturando infromações do lixo, por não terem sido declaradas.
	imprimePessoa(pessoas[4]); //Imprime todas as informações de pessoas[4], sendo elas: Peso = 0.0, Idade = 72, Altura = 0.00. Capturando infromações do lixo, por não terem sido decalrados.

	return 0;
}
