#include <stdio.h>
//Solução do Jose Henrique 14/10/2017 17:22, comentada por Rafael de Castro.ss

int main (){
	int A;//declarando as variáveis necessárias
	scanf("%d", &A);//realizando a entrada de valores.
	//conjunto de if's e else's para tratar cada caso.
	if(A == 1){
		printf("January");
		
	}else if(A == 2){
		printf("February");
		
	}else if(A == 3){
		printf("March");
	
	}else if(A == 4){
		printf("April");
	
	}else if(A == 5){
		printf("May");
		
	}else if(A == 6){
		printf("June");
	
	}else if(A == 7){
		printf("July");
		
	}else if(A == 8){
		printf("August");
	}else if(A == 9){
		printf("September");	
	}
	else if(A == 10){
		printf("October");
	}
	else if(A == 11){
		printf("November");
	}else if(A == 12){
		printf("December");
	}
			
	printf("\n");//salto de linha.
		
	return 0;
}
