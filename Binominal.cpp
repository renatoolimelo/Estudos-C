#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	system("Color 1F");
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, x;
	double p;

	printf("O n�mero de vezes que uma tentativa � repetida: (n)");
	scanf("%d",&n);
	
	printf("A probabilidade de sucesso de uma �nica tentativa: (p)");
	scanf("%lf", &p);
	
	double q = 1 - p;
	
	printf("A vari�vel aleat�ria representa a contagem dos n�meros de sucessos nas tentativas: (x)");
	scanf("%d", &x);
	
	printf("%d, %.2lf, %.2lf, %d", x, p, q, n);
	

	
}
