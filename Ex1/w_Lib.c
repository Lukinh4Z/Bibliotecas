#include <stdio.h>
#include <stdlib.h>
#include "mymath.h"

int leNumDaTela(char *s) {
    
    int num;
    
    printf("%s", s);
    scanf("%d", &num);

    return num;
}

int main() {

    int n = leNumDaTela("Por favor, informe o tamanho 'n' do vetor 'v[n]': ");

    int* v = (int*) malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++) {
        v[i] = leNumDaTela("Por favor, informe um valor para vetor: ");
    }

    multiValoresVetor(2, n, v);

    for(int i = 0; i < n; i++) {
        printf("v[%d]: %d \n", i, v[i]);
    }

    return 0;
}