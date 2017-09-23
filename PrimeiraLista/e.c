#include <stdio.h>

int main (){
	int x;
	float y;

	scanf("%d %f", &x, &y); //Lendo as entradas do programa (Observe que para ler um valor do tipo float temos que usar %f
	
	printf("%.3f km/l\n", x/y); //A divisao de um inteiro por um float em C resulta em um valor do tipo float, então no printf usamos %f para float, além disso podemos indicar quantas casas decimais queremos exibir utilizando %.3f para 3 casas decimais %.2f para duas casa etc..

	return 0;
}
