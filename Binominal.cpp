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
	
	int nFatorial = 1;
	
	for(int i = n; i > 1 ; i--){
		nFatorial = nFatorial * i;
	}
	
	int xFatorial = 1;
			
	for(int i = x; i > 1 ; i--){
		xFatorial = xFatorial * i;
	}
	
	int nx = n - x;
	
	int nxFatorial = 1;
			
	for(int i = nx; i > 1 ; i--){
		nxFatorial = nxFatorial * i;
	}
	
	
	
	
	
	
	
}
