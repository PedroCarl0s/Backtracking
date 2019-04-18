#include <stdio.h>
#include "permutacao.h"

int acc = 0;

int main() {
    
    int n, size;
    printf("Insira o valor de N: ");
    scanf("%d", &n);

    size = n;
    puts("");
    
    int array[size];
    int aux[size];

    generate(size, array);
    permutacao(0, size, array, aux);
    
    return 0;
}


void permutacao(int n, int size, int *array, int *aux) {

    int i;
    
    if (n == size) {
        acc++;
        print_res(size, aux);
    
         return;

    } else {
    
        for (i = 0; i < size; i++) {     
            
            aux[n] = array[i];

            permutacao(n+1, size, array, aux);
        }
    }
    return;

}

void print_res(int size, int *aux) {
    
    for (int i = 0; i < size; i++) {
        printf("[%d]: %d ", acc, aux[i]);
    }
    puts("");
    return;
}

void generate(int size, int *array) {

    for (int i = 0; i < size; i++) {
        if ((i % 2) == 0) {
            array[i] = 1;
        
        } else {
            array[i] = 0;
        }

    }

    // Array preenchido com bits
    //print_res(size, array);
    
}