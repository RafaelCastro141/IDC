#include <stdio.h>

int main (){
	//só leia e usando if's else's para dizer o resultado.
	int cod, qtd;

	scanf("%d%d", &cod, &qtd);

	printf("Total: R$ ");

	if(cod == 1){
		printf("%.2f\n", qtd * 4.00);
	}else if(cod == 2){
		printf("%.2f\n", qtd * 4.50);
	}else if(cod == 3){
		printf("%.2f\n", qtd * 5.00);
	}else if(cod == 4){
		printf("%.2f\n", qtd * 2.00);
	}else{
		printf("%.2f\n", qtd * 1.50);
	}

	//um jeito mais elegante poderia ser usar switch case.

	return 0;
}
