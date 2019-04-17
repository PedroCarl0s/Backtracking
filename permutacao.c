#include <stdio.h>
#include <stdlib.h>

#include "permutacao.h"

int main() {

    int n = 3;
    int *array;
    array = (int *) malloc(n * sizeof(int));

    if (array == NULL) puts("UNMEMORY");

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    printf("%d %d %d\n", array[0], array[1], array[2]);
    permutacao(n, array);

    
    return 0;
    
}


void permutacao(int n, int *array) {

    int i, aux, *ptr_a, *ptr_b;
    printf("VALOR n: %d\n", n);
    if (n == 0) {
        //printf("DENTRO: %d\n", n);
        print_res(array);
        
    }


    for (i = 0; i < n-1; i++) {
        printf("VALOR i: %d\n", i);
        int j;

        
        permutacao(n-1, array);
        j = i;
        
        if ((n % 2) == 0) {
            j = 0;
        } 

        //puts("PÓS IF");
        //*ptr_a = j;
        //puts("PÓS A");
        aux = (n-1);

        //puts("PASSOU AUX");
        //*ptr_b = aux;
        
        //free(ptr_a);
        //free(ptr_b);
        swap(&j, &aux);
        //puts("FIM");

    }
    return;
    
}


void print_res(int *array) {
    int length = 3;
    printf("SIZE: %d\n", length);

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    puts("");
    return;
}


void swap(int *px, int *py) {

    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    
}
