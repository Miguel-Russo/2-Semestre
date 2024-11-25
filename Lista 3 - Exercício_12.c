//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
void inverso(int v[], int tam);

int main(){

    int vet[10], i;

    for(i = 0; i < 10; i++){
        printf("Informe o %i° valor: ", i+1);
        scanf("%i", &vet[i]);
    }

    inverso(vet, 10);


    return 0;
}

//Função responsável por exibir a ordem inversa dos valores do vetor
void inverso(int v[], int tam){
    int i;

    for(i = tam - 1; i >= 0; i--){
        printf("%i\n", v[i]);
    }

}
