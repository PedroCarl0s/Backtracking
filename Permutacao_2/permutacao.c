#include <stdio.h>
#include "permutacao.h"

int acc = 0;


void back_bin(int i, int max, int *arr) {

    if (i == max) {
        int j;

        for(j=0;j<max;++j) {
            printf(" %d",arr[j]);
        }

        printf("\n");
        fflush(stdout);
        return ;
    }

    arr[i]=0;
    back_bin(i+1,max, arr);

    arr[i]=1;
    back_bin(i+1,max, arr);
    
    return;
}


int main() {
    
    int n, size;
    printf("Insira o valor de N: ");
    scanf("%d", &n);

    size = n;
    puts("");
    
    int array[size];
    int aux[size];

    permutacao(0, size, array);
    
    return 0;
}


void permutacao(int n, int size, int *array) {

    int i;
   
    if (n == size) {
        
        acc++;
        print_res(size, array);
    
         return;

    }        

    for (int k = 0; k < 2; k++) {     
        array[n] = k;
        permutacao(n+1, size, array);
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
    
}