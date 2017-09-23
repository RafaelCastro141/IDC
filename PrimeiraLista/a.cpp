#include <stdio.h>	

int main (){
	int a, b;
	
	scanf("%d%d", &a, &b);
	
	printf("X = %d\n", a+b);

	
	//formas diferentes mas também corretas:
	//printf("X = %d\n", a+b); 
	//printf("X = %d\n", b+a);

	//formas incorretas
	//printf("X = %d", soma); *sem a quebra de linha
	//printf("X=%d\n", soma); *faltando barra de espaço
	//printf("%d\n", soma);	*faltando SOMA = ...
	//printf("SOMA = %d\n", soma); *SOMA != X

	//então atenção com as entradas e saídas do programa para não terem submissões rejeitadas pelo juiz online.

	
	return 0;
}
