#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void bubbleSort(int* vetor, int tamvetor){
  int aux;
  for(int j=0; j<tamvetor; j++){
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
  printf("tamanho do vetor: ");
  int tamvetor;
  scanf("%i", &tamvetor);
  getchar();

  int *vetor = malloc(tamvetor * sizeof *vetor);

  srand(time(NULL));
  for(int i=0; i<tamvetor; i++){
    if(i > tamvetor/2)
      vetor[i] = rand()%10000;
    else if(i > tamvetor/3)
      vetor[i] = rand()%1000;
    else
      vetor[i] = rand()%100;
  }

  for(int i=0; i<tamvetor; i++){
    printf("%i,\n", vetor[i]);
  }

  printf("\n[pressione ENTER para continuar]");
  getchar();
  system("clear");

  bubbleSort(vetor,tamvetor);

  printf("vetor BUBBLESORTADO:\n");
  for (size_t i = 0; i < tamvetor; i++) {
    printf("%i,\n", vetor[i]);
  }

  return 0;
}
