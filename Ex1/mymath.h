#ifndef _MYMATH_H
#define _MYMATH_H

/**
 * essa é a forma direta, mas é possível
 * fazer também uma forma indireta com apenas 
 * a declaração da função no arquivo ".h"
 * e o corpo da mesma em um arquivo ".c"
 * que inclui o ".h"
 **/ 

    //função que multiplica por "fator" os valores de um vetor "v[n]"
    void multiValoresVetor(int fator, int n, int *v) {
        for(int i = 0; i < n; i++) {
            v[i] *= fator;
        }
    }

#endif