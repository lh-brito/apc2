/*
Escreva um script que:

  receba um valor N do usuário
  Aloque espaço para N inteiros na memória;
  Preencha esses espaços com os valores de 1 a N (usando um for)
  Imprima o penúltimo valor do vetor
  
O script deve compilar;
Enviar em um arquivo chamado parte_3.c, e não o .exe;
*/

#include <stdio.h>
#include <stdlib.h>

void secondToLast() {
  int arrayRange;
  printf("Digite o limite do contador de 1 a N. Sendo N o limite: ");
  scanf("%d", &arrayRange);

  int* intArray = (int*) malloc(arrayRange* sizeof(int));
  
  for(int i = 0; i < arrayRange; i += 1) intArray[i] = i + 1;

  printf("\n%d", intArray[arrayRange - 2]);
}

int main() {
  secondToLast();
  
  return 0;
}
