/*
Escreva um script que:

  receba um valor N do usuário
  Aloque espaço para N inteiros na memória;
  Receba, um a um, N inteiros do usuário e guarde no espaço reservado;
  Receba do usuário um valor K < N;
  Imprima o K-ésimo elemento da lista;

O script deve compilar;
Enviar em um arquivo chamado parte_6.c, e não o .exe;
*/

#include <stdio.h>
#include <stdlib.h>

void checkPositionValue() {
  int arrayRange;
  printf("Digite a quantidade de números que você deseja inserir no vetor: ");
  scanf("%d", &arrayRange);

  int* intArray = (int*) malloc(arrayRange* sizeof(int));
  
  for(int i = 0; i < arrayRange; i += 1) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &intArray[i]);
  }

  int position;
  printf("\nDigite a posição do vetor que você deseja verificar o valor.\n");
  printf("Lembrando que a primeira posição de um vetor começa com 0 e que posição\n");
  printf("tem que ser menor que a quantidade de números que o vetor possúi: ");
  scanf("%d", &position);

  printf("\nPosição %d. Valor: %d", position, intArray[position]);
}

int main() {
  checkPositionValue();
  
  return 0;
}
