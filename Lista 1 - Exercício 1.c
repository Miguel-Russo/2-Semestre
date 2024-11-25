//Miguel Russo Lorente

#include <stdio.h>

int main()
{
    //Matriz definida para 3 jogadores e 5 pontuações para cada.
    int pontos[3][5], i, j;
    //Variaveis de controle da soma de pontos de cada Jogador.
    int soma1 = 0, soma2 = 0, soma3 = 0;
    
    //Laço de repetição para ler todos os valores da matriz.
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            
            if(j == 0){
                printf("\nInforme a %i° pontuação do Jogador %i: ", j+1, i+1);
            }
            else{
                printf("Informe a %i° pontuação do Jogador %i: ", j+1, i+1);
            }
            
            scanf("%i", &pontos[i][j]);
            
            //Condicional para atribuir a soma das pontuações de cada Jogador.
            if(i == 0){ 
                soma1 = soma1 + pontos[i][j];
            }
            else if(i == 1){
                soma2 = soma2 + pontos[i][j];
            }
            else{
                soma3 = soma3 + pontos[i][j];
            }
        }
    }
    
    printf("\nPontuação dos Jogadores:\n\n");
    printf("Jogador 1: %i pontos\n", soma1);
    printf("Jogador 2: %i pontos\n", soma2);
    printf("Jogador 3: %i pontos\n\n", soma3);
    
    //Condicional para verificar o vencedor.
    if(soma1 > soma2 && soma1 > soma3){
        printf("Vencedor: Jogador 1\n");
    }
    else if(soma2 > soma1 && soma2 > soma3){
        printf("Vencedor: Jogador 2\n");
    }
    else{
        printf("Vencedor: Jogador 3\n");
    }

    return 0;
}
