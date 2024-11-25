#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define FILENAME "LivrariaAurora.csv"

// Definição das structs Clientes, Livro e Emprestimo.
typedef struct{
	char Nome[100];
	char CPF[14];
	char Telefone [15];
} Cliente;

typedef struct{
	char Titulo[100];
	char Genero[50];
	char Autor[100];
	char Editora[50];
	char ISBN[17];
} Livro;

typedef struct{
	char Nome[100];
	char Titulo[100];
	int diaEmprestimo;
	int mesEmprestimo;
} Emprestimo;

// Assinatura das funções criadas.
void inicial();
void cadastro_1(Cliente X);
void lista_2(Livro X);
void emprestimo_3(Emprestimo X);


int main(){

	// Criação de instâncias para cada struct.
	Cliente clienteNovo;
	Livro livroNovo;
	Emprestimo emprestimoNovo;

	// Variavel declarada para escolher uma das 4 opções a seguir.
	int opcaoEscolhida;

	setlocale(LC_ALL, "Portuguese");

	// Representação gráfica para escolher uma das opções.
	printf("============== Livraria Aurora ==============\n\n");
	printf("1. Cadastrar Cliente.\n");
	printf("2. Lista de Livros.\n");
	printf("3. Empréstimo de Livros.\n");
	printf("4. Sair.\n\n");
	printf("=============================================\n\n");

	// Leitor da opção.
	printf("Informe sua opção: ");
	scanf("%i", &opcaoEscolhida);

	// Condição criada para limpar a tela apenas quando a opção escolhida for 1, 2 ou 3.
	if(opcaoEscolhida == 1 || opcaoEscolhida == 2 || opcaoEscolhida == 3){
		system("cls");
	}

	// Condicional criada para chamar uma função específica dependendo da opção escolhida.
	if(opcaoEscolhida == 1){
		cadastro_1(clienteNovo);
	}
	else if(opcaoEscolhida == 2){
		lista_2(livroNovo);
	}
	else if(opcaoEscolhida == 3){
		emprestimo_3(emprestimoNovo);
	}
	else if(opcaoEscolhida == 4){
		printf("\n\nSaindo.....\n");
	}
	else{
		printf("\n\nEscolha uma opção válida.\n");
	}




	return 0;

}

// Função responsável por chamar novamente tudo que está na main.
void inicial(){

	system("cls");

	Cliente clienteNovo;
	Livro livroNovo;
	Emprestimo emprestimoNovo;

	int opcaoEscolhida;

	printf("============== Livraria Aurora ==============\n\n");
	printf("1. Cadastrar Cliente.\n");
	printf("2. Lista de Livros.\n");
	printf("3. Empréstimo de Livros.\n");
	printf("4. Sair.\n\n");
	printf("=============================================\n\n");

	printf("Informe sua opção: ");
	scanf("%i", &opcaoEscolhida);

	if(opcaoEscolhida == 1 || opcaoEscolhida == 2 || opcaoEscolhida == 3){
		system("cls");
	}


	if(opcaoEscolhida == 1){
		cadastro_1(clienteNovo);
	}
	else if(opcaoEscolhida == 2){
		lista_2(livroNovo);
	}
	else if(opcaoEscolhida == 3){
		emprestimo_3(emprestimoNovo);
	}
	else if(opcaoEscolhida == 4){
		printf("\n\nSaindo.....\n");
	}
	else{
		printf("\n\nEscolha uma opção válida.\n");
	}

}

// Função utilizada para o cadastro de clientes.
void cadastro_1(Cliente X){

	int continuar = 1; // Variável utilizada como base para o laço de repetição a seguir.
	int telaInicial; // Variável responsável por armazernar a resposta do usuário para o retorno da tela inicial (1 / 0).
	int c; // A variável c nesse código serve como um buffer temporário para armazenar cada caractere lido da entrada padrão (geralmente o teclado) até que seja encontrado um caractere de nova linha (\n) ou o fim do arquivo (EOF).

	// Looping para o cadastro de clientes até que "continuar" seja diferente de 1.
	while (continuar){

		// Esse comando tem como objetivo abrir um arquivo para leitura e escrita, adicionando dados ao final do arquivo. Se o arquivo especificado não existir, ele será criado.
		FILE *arquivo = fopen("C:\\Users\\miguel.lorente_uscso\\Downloads\\Registro_de_Clientes.txt", "a+");

		// Verificação da existência do arquivo.
		if(!arquivo){
			printf("Erro ao abrir o arquivo.\n");
			return;
		}

		printf("=====================================================\n");
		printf("\t\t\tCadastro\n");
		printf("=====================================================\n\n");

		printf("Informe o nome do cliente............................: ");
    	while ((c = getchar()) != '\n' && c != EOF); // Tem como principal objetivo consumir (ou descartar) todos os caracteres de entrada até encontrar um caractere de nova linha (\n) ou o final do arquivo (EOF).
		fgets(X.Nome, sizeof(X.Nome), stdin); // Comando responsável pela leitura de uma variável tipo char.
		X.Nome[strcspn(X.Nome, "\n")] = '\0'; // Retira a quebra de linha colocada pelo comando fgets.

		printf("Informe o CPF do cliente (Apenas os números).........: ");
		scanf("%s", X.CPF);

		printf("Informe o telefone do cliente........................: ");
		while ((c = getchar()) != '\n' && c != EOF);
		fgets(X.Telefone, sizeof(X.Telefone), stdin);

		fprintf(arquivo, "Nome do cliente: %s\nCPF do cliente: %s\nTelefone do cliente: %s\n\n", X.Nome, X.CPF, X.Telefone); // Escreve as informações dadas dentro do arquivo que se refere.
		fclose(arquivo); // Esse comando executa o fechamento do arquivo.

		printf("Cliente Cadastrado.\n\n");

		printf("----------------------------------------\n");
		printf("Gostaria de Cadastrar um novo cliente?\n\n1. Sim - Novo Cadastro\n0. Não - Encerrar Cadastro\n");
		scanf("%i", &continuar);
		printf("\n");

		if(continuar){
			system("cls");
		}

	}

	printf("----------------------------------------\n");
	printf("Voltar a tela inicial?\n\n1. Sim - Retornar\n0. Não - Encerrar\n");
	scanf("%i", &telaInicial);

	if(telaInicial == 1){
		inicial();
	}
	else{
		printf("\n");
		printf("Encerrando...\n");
	}


}


// Função utilizada para a listagem de livros.
void lista_2(Livro X){

	int Qtd_Livros = 6; // Variável utilizada para a referência numeral de novos livros.
	int continuar = 1;
	int adicionarLivros, c, telaInicial;

	printf("=====================================================\n");
	printf("\t\t  Estoque de Livros\n");
	printf("=====================================================\n\n");

	printf("1. O Pequeno Príncipe\n2. O Senhor do Anéis\n3. 1984\n4. Harry Potter e a Pedra Filosofal\n5. Harry Potter e a Câmara Secreta\n\n");
	printf("----------------------------------\n");
	printf("Gostaria de adicionar mais livros?\n\n1. Sim\n0. Não\n");
	scanf("%i", &adicionarLivros);
	printf("\n");

	if(adicionarLivros == 1){

			FILE *arquivo = fopen("C:\\Users\\miguel.lorente_uscso\\Downloads\\Lista_de_Livros.txt", "a+");

			if(!arquivo){
				printf("Erro ao abrir o arquivo.\n");
				return;
			}

			fprintf(arquivo, "Estoque de livros: \n\n1. O Pequeno Príncipe\n2. O Senhor do Anéis\n3. 1984\n4. Harry Potter e a Pedra Filosofal\n5. Harry Potter e a Câmara Secreta\n\n");

		while(continuar){

			system("cls");

			printf("=====================================================\n");
			printf("\t\t  Estoque de Livros\n");
			printf("=====================================================\n\n");

			printf("Insira as seguintes informações para cadastrar um novo livro:\n\n");
			printf("Informe o nome do livro:..................: ");
			while ((c = getchar()) != '\n' && c != EOF);
			fgets(X.Titulo, sizeof(X.Titulo), stdin);
			X.Titulo[strcspn(X.Titulo, "\n")] = '\0';

			printf("Informe o(s) gênero(s) do livro:..........: ");
			fgets(X.Genero, sizeof(X.Genero), stdin);
			X.Genero[strcspn(X.Genero, "\n")] = '\0';

			printf("Informe o(s) nome(s) do(s) autor(es)......: ");
			fgets(X.Autor, sizeof(X.Titulo), stdin);
			X.Autor[strcspn(X.Autor, "\n")] = '\0';

			printf("Informe a editora do livro:...............: ");
			fgets(X.Editora, sizeof(X.Editora), stdin);
			X.Editora[strcspn(X.Editora, "\n")] = '\0';

			printf("Informe o ISBN do livro:..................: ");
			scanf("%s", X.ISBN);

			printf("Livro Cadastrado.\n\n");

			fprintf(arquivo, "%i. %s\n   Gênero: %s\n   Autor(es): %s\n   Editora: %s\n   ISBN: %s\n\n", Qtd_Livros, X.Titulo, X.Genero, X.Autor, X.Editora, X.ISBN);

			Qtd_Livros++;

			printf("----------------------------------\n");
			printf("Gostaria de adicionar outro livro?\n\n1. Sim\n0. Não\n");
			scanf("%i", &continuar);
			printf("\n");

			if(continuar){
				system("cls");
			}

		}

		fclose(arquivo);

		printf("----------------------\n");
		printf("Voltar a tela inicial?\n\n1. Sim - Retornar\n0. Não - Encerrar\n");
		scanf("%i", &telaInicial);

		if(telaInicial == 1){
			inicial();
		}
		else{
			printf("\n");
			printf("Encerrando...\n");
		}

	}

	else{

		printf("----------------------\n");
		printf("Voltar a tela inicial?\n\n1. Sim - Retornar\n0. Não - Encerrar\n");
		scanf("%i", &telaInicial);

		if(telaInicial == 1){
			inicial();
		}
		else{
			printf("\n");
			printf("Encerrando...\n");
		}

	}
}


void emprestimo_3(Emprestimo X){
	int Qtd_de_Livros; // Variável responsável por armazenar a quantidade de livros que serão lidos.
	int i, c;
	int continuar = 1, telaInicial;

	FILE *arquivo = fopen("C:\\Users\\miguel.lorente_uscso\\Downloads\\Emprestimo_de_Livros.txt", "a+");

	if(!arquivo){
		printf("Erro ao abrir o arquivo.\n");
		return;
	}

	while(continuar){

		printf("=============================================\n");
		printf("\t\t  Empréstimo\n");
		printf("=============================================\n\n");

		printf("Informe o nome do cliente: ");
		while ((c = getchar()) != '\n' && c != EOF);
		fgets(X.Nome, sizeof(X.Nome), stdin);

		printf("\nInforme a quantidade de livros que serão emprestados: ");
		scanf("%i", &Qtd_de_Livros);

		fprintf(arquivo, "Nome do cliente: %s\nQuantidade de livros para empréstimo: %i\n", X.Nome, Qtd_de_Livros);

		if(Qtd_de_Livros == 1){
			printf("Informe o titulo do livro..........: ");
			while ((c = getchar()) != '\n' && c != EOF);
			fgets(X.Titulo, sizeof(X.Titulo), stdin);
			X.Titulo[strcspn(X.Titulo, "\n")] = '\0';

			fprintf(arquivo, "Titulo do livro: %s\n", X.Titulo);

		}
		else{
			for(i = 1; i <= Qtd_de_Livros; i++){
				printf("Informe o nome do %i° livro..........: ", i);
				if(i == 1){
					while ((c = getchar()) != '\n' && c != EOF);
					fgets(X.Titulo, sizeof(X.Titulo), stdin);
					X.Titulo[strcspn(X.Titulo, "\n")] = '\0';

					fprintf(arquivo, "Titulo do %i° livro: %s\n", i, X.Titulo);
				}
				else{
					fgets(X.Titulo, sizeof(X.Titulo), stdin);
					X.Titulo[strcspn(X.Titulo, "\n")] = '\0';

					fprintf(arquivo, "Titulo do %i° livro: %s\n", i, X.Titulo);
				}
			}
		}

		printf("\n----------------------------------------------\n");

		printf("Informe o dia do empréstimo: ");
		scanf("%i", &X.diaEmprestimo);

		printf("Informe o mês do empréstimo: ");
		scanf("%i", &X.mesEmprestimo);

		printf("\n\n----------------------------------------------\n");

		fprintf(arquivo, "\nDia do empréstimo: %i\nMês do empréstimo: %i\n", X.diaEmprestimo, X.mesEmprestimo);

		// Condicionais reponsáveis por organizar a exibição da data final do empréstimo, para que não haja mês 13 e dias acima de 31 por exemplo.
		if(X.mesEmprestimo == 12 && (X.diaEmprestimo > 0 && X.diaEmprestimo < 32)){
			printf("Data final do empréstimo:\n\nDia: %i\nMês: 1\n\n", X.diaEmprestimo);
			fprintf(arquivo, "\nData final do empréstimo:\nDia: %i\nMês: 1\n\n", X.diaEmprestimo);
		}
		else if(X.mesEmprestimo == 2 && X.diaEmprestimo > 28){
			printf("Insira um dia válido para o mês.\n\n");
			fprintf(arquivo, "Empréstimo cancelado.\n\n");
			break;
		}
		else if(X.mesEmprestimo == 1 && X.diaEmprestimo > 28){
			printf("Data final do empréstimo:\n\nDia: 28\nMês: %i\n\n", X.mesEmprestimo + 1);
			fprintf(arquivo, "\nData final do empréstimo:\nDia: 28\nMês: %i\n\n", X.mesEmprestimo + 1);
		}
		else if((X.mesEmprestimo == 1 || X.mesEmprestimo == 3 || X.mesEmprestimo == 5 || X.mesEmprestimo == 8 || X.mesEmprestimo == 10) && X.diaEmprestimo == 31){
			printf("Data final do empréstimo:\n\nDia: 30\nMês: %i\n\n", X.mesEmprestimo + 1);
			fprintf(arquivo, "\nData final do empréstimo:\nDia: 30\nMês: %i\n\n", X.mesEmprestimo + 1);
		}
		else if((X.mesEmprestimo == 2 || X.mesEmprestimo == 4 || X.mesEmprestimo == 6 || X.mesEmprestimo == 9 || X.mesEmprestimo == 11) && X.diaEmprestimo > 30){
			printf("Empréstimo cancelado. Dia inválido para o mês.\n\n");
			fprintf(arquivo, "Empréstimo cancelado.\n\n");
			break;
		}
		else if(X.mesEmprestimo > 12 ){
			printf("Insira um mês válido.\n\n");
			fprintf(arquivo, "Empréstimo cancelado.\n\n");
			break;
		}
		else if(X.diaEmprestimo > 31){
			printf("Insira um dia válido.\n\n");
			fprintf(arquivo, "Empréstimo cancelado.\n\n");
			break;
		}
		else{
			printf("Data final do empréstimo:\n\nDia: %i\nMês: %i\n\n", X.diaEmprestimo, X.mesEmprestimo + 1);
			fprintf(arquivo, "\nData final do empréstimo:\nDia: %i\nMês: %i\n\n", X.diaEmprestimo, X.mesEmprestimo + 1);
		}

		printf("Empréstimo efetuado com sucesso.\n\n");
		printf("-------------------------------------------\n");
		fprintf(arquivo, "-------------------------------------------\n\n");

		printf("Gostaria de efetuar outro empréstimo?\n\n1. Sim - Continuar empréstimo\n0. Não - Encerrar empréstimo\n");
		scanf("%i", &continuar);

		if(continuar == 1){
			system("cls");
		}

	}

	fclose(arquivo);

	printf("----------------------------------------------\n");
	printf("Voltar a tela inicial?\n\n1. Sim - Retornar\n0. Não - Encerrar\n");
	scanf("%i", &telaInicial);

	if(telaInicial == 1){
		inicial();
	}
	else{
		printf("\n");
		printf("Encerrando...\n");
	}


}
