#include <stdio.h>
#include "permutacao.h"

int main() {
    
    int n, size;
    printf("Insira o valor de N: ");
    scanf("%d", &n);
    
    size = n;
    puts("");
    
    int array[size];
    generate(size, array);
    permutacao(n, size, array);
    
    return 0;
}


void permutacao(int n, int size, int *array) {
    
    int i;
    
    if (n == 0) {
        print_res(n, size, array);
    }
    
    for (i = 0; i < n; i++) {     
        int j;
        permutacao(n-1, size, array);
        
        j = i;
        if ((n % 2) == 0) {
            j = 0;
        } 

        swap(&array[j], &array[n-1]);
    }
    return;

}

void print_res(int input, int size, int *array) {
    
    for (int i = 0; i < size; i++) {
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

void generate(int input, int *array) {
    for (int i = 0; i < input; i++) {
        array[i] = i+1;
    }
}