#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	system("Color 1F");
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, x;
	double p;

	printf("O número de vezes que uma tentativa é repetida: (n)");
	scanf("%d",&n);
	
	printf("A probabilidade de sucesso de uma única tentativa: (p)");
	scanf("%lf", &p);
	
	double q = 1 - p;
	
	printf("A variável aleatória representa a contagem dos números de sucessos nas tentativas: (x)");
	scanf("%d", &x);
	
	printf("%d, %.2lf, %.2lf, %d", x, p, q, n);
	

	
}
