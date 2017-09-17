#include <stdio.h>

int main (){
	int a, b;//declarando as variáveis para meu programa.
	int soma;

	scanf("%d%d", &a, &b);

	soma = a+b;

	printf("SOMA = %d\n", soma);

	//formas diferentes mas também corretas:
	//printf("SOMA = %d\n", a+b); 
	//printf("SOMA = %d\n", b+a);

	//formas incorretas
	//printf("SOMA = %d", soma); *sem a quebra de linha
	//printf("SOMA=%d\n", soma); *faltando barra de espaço
	//printf("%d\n", soma);	*faltando SOMA = ...
	//printf("SUM = %d\n", soma); *SUM != SOMA

	//então atenção com as entradas e saídas do programa para não terem submissões rejeitadas pelo juiz online.
	
}
