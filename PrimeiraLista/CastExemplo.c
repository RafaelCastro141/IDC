#include <stdio.h>

int main (){
	//exercício H com cast
	int h, p;

	scanf("%d%d", &h, &p);

	printf("%.2f\n", ((float)h)/p);

	return 0;
}
