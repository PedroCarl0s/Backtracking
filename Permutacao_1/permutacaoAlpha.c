#include <stdio.h>

void swap(int vetor[], int i, int j){
  int aux = vetor[i];
  vetor[i] = vetor[j];
  vetor[j] = aux;
}

void permutacao(int vetor[], int j, int n){
  
  //Se o indice j (inicial) for igual ao indice n (final):
  //Imprima p = todos os elementos do vetor (permutação).
  
  if(j == n){
    for(int i = 0; i < n; i++){
      printf("%d ", vetor[i]);
    }
    printf("\n");
  }
  
  for(int i = j; i < n; i++){
    
    //Troque o valor do vetor[j], pelo vetor[i]
    swap(vetor, j, i);
    
    //Chamada recursiva
    permutacao(vetor, j+1, n);
    
    //Bactracking - Aqui o valor do vetor é restaurado ao original (raiz).
    swap(vetor, j, i);
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  int vetor[n];
  int len_vetor = sizeof(vetor) / sizeof(int);

  for(int i = 0; i < n; i++){
    vetor[i] = i+1;
  }

  permutacao(vetor, 0, len_vetor);
  return 0;
}