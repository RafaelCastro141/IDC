#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if((a + b) % 2 == 0){//se a soma for par o primeiro ganhou.
        printf("PRIMEIRO\n");
    }else{//caso contrário o segundo ganhou
        printf("SEGUNDO\n");
    }
    
    return 0;
}
