#include <stdio.h>

int main (){
	int ini, fim;
	int tempo;

	scanf("%d %d", &ini, &fim);

	if(ini >= fim){//se isso acontecer então o jogo aconteceu entre dois dias consecutivos.
		tempo = 24 - ini + fim;//pensem nessa conta.
	}else{
		tempo = fim - ini;//se não calcula normalmente, ou seja tempo de fim - inicio.
	}

	printf("O JOGO DUROU %d HORA(S)\n", tempo);

	return 0;
}
