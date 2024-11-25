//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura das funções
double mediaEscola(int Class);
double mediaTurma(int numAlunos);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int Turmas;
    double Res;
   
    printf("Informe quantas turmas serão avaliadas: ");
    scanf("%i", &Turmas);
   
    Res = mediaEscola(Turmas);
   
    printf("Média Geral = %.2lf\n", Res);
   
   
   
}

//Função resposável por calcular a média da escola.
double mediaEscola(int numTurmas){
    int j = 1, qtdAlunos, cont;
    double mediaGeral = 0;
   
    while (j <= numTurmas){
        printf("Quantos alunos a %iª turma possui? ", j);
        scanf("%i", &qtdAlunos);
        mediaGeral = mediaGeral + mediaTurma(qtdAlunos);
       
        j++;
    }
   
    mediaGeral = mediaGeral/numTurmas;
   
    return mediaGeral;
}

//Função resposável por calcular a média da turma.
double mediaTurma(int numAlunos){
    int i;
    double nota, soma = 0, media = 0;
   
    for(i = 1; i <= numAlunos; i++){
        printf("Informe a nota do %i° aluno: ", i);
        scanf("%lf", &nota);
        soma += nota;
    }
   
    media = soma / numAlunos;
    printf("Média da turma: %.2lf\n\n", media);
   
    return media;
}
