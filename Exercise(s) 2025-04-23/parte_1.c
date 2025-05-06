/* 
[Sem input do usuário]
Escreva um script que contenha funções que:

  Aloque dinamicamente um inteiro, atribua o valor 10 e imprima-o.
  Aloque um float usando malloc(), atribua 3.14 e imprima o valor.
  Aloque memória para um char, armazene a letra 'A' e imprima-a.

Cada função deve ser separada, e as três funções devem ser chamadas na main();
O script deve compilar;
Enviar em um arquivo chamado parte_1.c, e não o .exe;
*/

#include <stdio.h>
#include <stdlib.h>

void mAllocToInt() {
  int* intPtr = (int*) malloc(sizeof(int));
  *intPtr = 10;
  
  printf("%d\n", *intPtr);
}

void mAllocToFloat() {
  float* floatPtr = (float*) malloc(sizeof(float));
  *floatPtr = 3.14;
  
  printf("%.2f\n", *floatPtr);
}

void mAllocToChar(){
  char* charPtr = (char*) malloc(1* sizeof(char));
  *charPtr = 'A';
  
  printf("%c\n", *charPtr);
}

int main() {
  mAllocToInt();
  mAllocToFloat();
  mAllocToChar();
  
  return 0;
}
