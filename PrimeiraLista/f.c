#include<stdio.h>

int main(){
	float A, B;//declare as variáveis necessárias
	scanf("%f", &A);
	scanf("%f", &B);

	printf("MEDIA = %.5f\n", (A*3.5+B*7.5)/11);//calcule a média de acordo com a especificação do problema, observe que a precisão são de 5 casas decimais

	return 0;
}
