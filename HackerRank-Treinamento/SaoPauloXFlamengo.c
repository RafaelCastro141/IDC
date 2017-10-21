#include <stdio.h>

int main (){
	int a, b, d, e;
	char c;

	scanf("%d x %d", &a, &b);//colocando dessa forma você ignora os caracteres da entrada, já que estes não fazem diferença na resolução do problema.
	scanf("%d x %d", &d, &e);

	if(a == d && b == e){
		printf("ACERTOU\n");
	}else{
		printf("ERROU\n");
	}

	return 0;
}
