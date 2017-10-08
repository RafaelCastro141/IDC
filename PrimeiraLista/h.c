#include <stdio.h>

int main (){
	//o jeito mais fácil de fazer essa questão é ignorar o enunciado que diz que a entrada consiste de dois inteiros, para o juiz online seu algoritmo ler valores inteiros e guardar em float não faz diferença. Como a saída quer um valor com casas decimais fazer esse processo com valores inteiros necessitaria em C do "cast".
	float h, p;

	scanf("%f%f", &h, &p);

	printf("%.2f\n", h/p);

	return 0;
}
