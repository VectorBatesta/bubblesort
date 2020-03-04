#include <stdlib.h>
#include <stdio.h>

void bubbleSort(int* vetor, int tamvetor){
  int aux;
  for(int j=0; j<50; j++){
    for(int i=0; i<tamvetor-1; i++){
      if(vetor[i+1] < vetor[i]){
        aux = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = aux;
      }
    }
  }
}

int main(){
  int vetor[50] = {23,45,234,52,345,2345,2,345,234,5,234,6,435,67456,7,5678,567,8,67,345,6143,3567,257,245,62,34,525,73,457,37};
  int tamvetor = 50;

  bubbleSort(vetor,tamvetor);

  for (size_t i = 0; i < tamvetor; i++) {
    printf("%i,\n", vetor[i]);
  }

  return 0;
}
