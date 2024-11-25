//Miguel Russo Lorente

#include <stdio.h>

int main()
{
    //Declaração da variavel responsável por definir o tamanho da matriz.
    int n, i, j;
    
    scanf("%i", &n);
    
    //Definição da matriz quadrada.
    int Mat[n][n];
    
    //Loop realizado para inserir os valores em cada posição.
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            
            if(j <= i){
                Mat[i][j] = j + 1;
            }
            else{
                Mat[i][j] = 0;
            }
            
        }
    }
    
    //Loop para exibir o valor alocado dentro de cada posição.
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%i", Mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}  
