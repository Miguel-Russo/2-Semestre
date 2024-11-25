//Miguel Russo Lorente

#include <stdio.h>

//Assinatura da função
double media(double N1, double N2, double N3, double N4);

int main(){
	
	double Nota1, Nota2, Nota3, Nota4, res;
	
	printf("Insira suas ultimas 4 notas: ");
	scanf("%lf %lf %lf %lf", &Nota1, &Nota2, &Nota3, &Nota4);
	
	res = media(Nota1, Nota2, Nota3, Nota4);
	
	printf("Media Final: %.1lf\n", res);
	
	//Condicional para determinar se foi aprovado ou reprovado
	if(res >= 7.0){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}
	
	return 0;
}

//Função responsável por calcular a média entre 4 notas
double media(double N1, double N2, double N3, double N4){
	
	return (N1 + N2 + N3 + N4)/4;
}
