#include <stdio.h>
#include <stdlib.h>

#include "permutacao.h"

int main() {

    int n = 3;
    int array[] = {1, 2, 3};

    permutacao(n, array);

    return 0;
}


void permutacao(int n, int *array) {

    int i, aux, *ptr_a, *ptr_b;
    
    if (n == 0) {
        print_res(array);
        
    }
    
    for (i = 0; i <= n-1; i++) {     
        int j;

        permutacao(n-1, array);
        
        j = i;
        if ((n % 2) == 0) {
            j = 0;
        } 

        swap(&array[j], &array[n-1]);
    }
    return;

}

void print_res(int *array) {
    int length = 3;

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