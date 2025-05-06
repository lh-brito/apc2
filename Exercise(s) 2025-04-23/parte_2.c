/*
Escreva um script que:

  Aloque espaço para 5 inteiros na memória;
  Preencha esses espaços com os valores de 1 a 5 (usando um for)
  Imprima os valores um a um (usando um for)
  
O script deve compilar;
Enviar em um arquivo chamado parte_2.c, e não o .exe;
*/

#include <stdio.h>
#include <stdlib.h>

void counter(int arrayRange) {
  int* intArray = (int*) malloc(arrayRange* sizeof(int));
  
  for(int i = 0; i < arrayRange; i += 1) intArray[i] = i + 1;

  for(int i = 0; i < arrayRange; i += 1) {
    printf("%d", intArray[i]);
    if(i != arrayRange - 1) printf("\n"); 
  }
}

int main() {
  counter(5);
  
  return 0;
}
