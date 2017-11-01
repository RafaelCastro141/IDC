#include <stdio.h>

int main (){
	int count = 0;
	int x;

	scanf("%d", &x);

	count = count + x;
	count = count + x;
	count = count + x;

	printf("%d\n", count);

	return 0;
}