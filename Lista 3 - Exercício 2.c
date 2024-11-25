//Miguel Russo Lorente

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{ //Inicializando uma struct
	char modelo[50]; //Declaração de uma variavel do tipo char, responsavel por armazenar o modelo.
	int ano; //Declaração de uma variavel do tipo int, responsavel por armazenar o ano.
	double preco; //Declaração de uma variavel do tipo double, responsavel por armazenar o preço.
} Carro; //Nome dado a struct através do "typedef", assim abreviando a estrutura de declaração de variaveis pertencentes a essa struct.

void modificarPreco(Carro *c, double novoPreco){ //Função com retorno void, recebendo como parametro um ponteiro do tipo Carro e um double..
	(*c).preco = novoPreco; //(*c).preco == c -> preco.  O conteudo armazenado na variavel preco é substituida pelo valor armazenado na variavel novoPreco através do ponteiro.
} //Fim função.

void imprimirCarro(Carro *c){ //Função com retorno void, recebendo como parametro um ponteiro do tipo Carro.
	printf("Modelo do carro: %s\n", c -> modelo); //Exibição do modelo do carro, atraves do ponteiro.
	printf("Ano do carro: %i\n", c -> ano); //Exibição do ano do carro, atraves do ponteiro.
	printf("Preço do carro: %.2lf\n", c -> preco); //Exibição do preço do carro, atraves do ponteiro.
	printf("\n\n\n");
}

int main(){ //Inicio da main
	setlocale(LC_ALL, "portuguese"); //Comando responsavel por aceitar caracteres especiais como acentos.
	Carro carro1; //Criação de uma variavel chamada carro1 do tipo Carro.
	
	strcpy(carro1.modelo, "XyZ"); //O comando strcpy é responsavel por copiar o valor de uma string de um local para outro, nesse caso copiando a string "XyZ" e copiando a mesma na variavel modelo de carro1.
	carro1.ano = 2020; //Atribuição de um valor na varivel ano de carro1.
	carro1.preco = 90000.00; //Atribuição de um valor na varivel preco de carro1.
	
	printf("Dados antes da modificação: \n");
	imprimirCarro(&carro1);  //Imprime todas as informações de carro1, sendo elas: Modelo = XyZ, Ano = 2020, Preço = 90000.00.
	
	modificarPreco(&carro1, 115000.00); //Modificou o valor da variavel preco de carro1 saindo de 90000.00 para 115000.00.
	
	printf("Dados após a modificação: \n");
	imprimirCarro(&carro1); //Imprime todas as informações de carro1, sendo elas: Modelo = XyZ, Ano = 2020, Preço = 115000.00.
	
	
	return 0;
} //Final da main.
