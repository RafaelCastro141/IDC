#include <stdio.h>

int main (){
	int a, b, prod;

	scanf("%d%d", &a, &b);

	prod = a*b;

	printf("PROD = %d\n", prod);

	//formas diferentes mas também corretas:
	//printf("PROD = %d\n", a*b); 
	//printf("PROD = %d\n", b*a);

	//formas incorretas
	//printf("PROD = %d", prod); *sem a quebra de linha
	//printf("PROD=%d\n", prod); *faltando barra de espaço
	//printf("%d\n", prod);	*faltando PROD = ...
	//printf("PRODUTO = %d\n", soma); *PRODUTO != PROD
}
