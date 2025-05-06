/*
Escreva um script que:

  receba um valor N do usuário
  Aloque espaço para N inteiros na memória;
  Receba, um a um, N inteiros do usuário e guarde no espaço reservado;
  Imprima a média dos valores;

O script deve compilar;
Enviar em um arquivo chamado parte_5.c, e não o .exe;
*/

#include <stdio.h>
#include <stdlib.h>

void calcAverage() {
  int arrayRange;
  printf("Digite a quantidade de números que você deseja calcular a média: ");
  scanf("%d", &arrayRange);

  int* intArray = (int*) malloc(arrayRange* sizeof(int));
  
  for(int i = 0; i < arrayRange; i += 1) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &intArray[i]);
  }

  int average;

  for(int i = 0; i < arrayRange; i += 1) {
    average += intArray[i];
    if(i == arrayRange - 1) printf("\nMédia: %d", average / arrayRange);
  }
}

int main() {
  calcAverage();
  
  return 0;
}
