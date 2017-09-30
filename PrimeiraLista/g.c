#include <stdio.h>

int main (){
	int numero, horas;//declare as variáveis de acordo com o necessário
	float valorHora;

	scanf("%d", &numero);
	scanf("%d", &horas);
	scanf("%f", &valorHora);

	printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero,horas * valorHora);//imprima a sáida adequada.

	return 0;
}
