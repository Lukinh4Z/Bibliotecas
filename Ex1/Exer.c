#include <stdio.h>
#include <stdlib.h>


int leNumDaTela(char *s) {
    
    int num;
    
    printf("%s", s);
    scanf("%d", &num);

    return num;
}

void dobraValores(int n, int *v) {
    for(int i = 0; i < n; i++) {
        v[i] *= 2;
    }
}

int main() {

    int n = leNumDaTela("Por favor, informe o valor de n: ");

    int* v = (int*) malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++) {
        v[i] = leNumDaTela("Por favor informe um valor para o vetor: ");
    }

    dobraValores(n, v);

    for(int i = 0; i < n; i++) {
        printf("v[%d]: %d \n", i, v[i]);
    }

    return 0;
}