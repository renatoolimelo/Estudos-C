#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	system("Color 1F");
	
	setlocale(LC_ALL,"Portuguese");
	
	char palavra[50];
	int tamanho;
	
	printf("Informe a palavra: ");
	scanf("%s", palavra);
	strlwr(palavra);
	
	tamanho = strlen(palavra);
	
	int j = tamanho - 1;
	
	for(int i = 0; i < tamanho; i++){
		if(palavra[i] != palavra[j]){
			printf("N�o � um pal�ndromo.");
			return 0;
		}
		else if(palavra[i] == palavra[j] && j == 0){
			printf("� um pal�ndromo.");
		}
		j--;
	}
	
	printf("\n");
	system("pause");	
}
