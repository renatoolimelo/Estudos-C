#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	system("Color 1F");
	
	int fila;
	
	do{
	printf("Informe o tamanho da fila: ");
	scanf("%d", &fila);
	system("cls");}
	while(fila <= 0);
	
	double valor[fila];
		
	for(int i=0; i < fila ; i++){
		printf("Informe o valor da posição %d: ", i +1);
		scanf("%lf",&valor[i]);
		system("cls");
	}
	
	for(int i = 0; i < fila; i++){
		printf("Valor da posição %d = %.2f", i + 1, valor[i]);
		printf("\n");
	}
	
	double menor = valor[0];
	double maior = valor[0];
	int posicaoMenor = 1;
	int posicaoMaior = 1;
	
	for(int i = 0; i < fila; i ++){
		if(valor[i] < menor){
			posicaoMenor = i + 1;
			menor = valor[i];
		}
		if(valor[i] > maior){
			posicaoMaior = i + 1;
			maior = valor[i];
		}
	}
	printf("\n");
	printf("Maior -> Posição: %d, Valor: %.2f", posicaoMaior, maior);
	printf("\n");
	printf("Menor -> Posição: %d, Valor: %.2f", posicaoMenor, menor);
	printf("\n");
	
	system("Pause");
	
}
