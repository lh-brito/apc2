// TODA CRIAÇÃO DE VETOR É USANDO MALLOC, SALVO DISPOSIÇÃO CONTRÁRIA

#include <stdio.h>
#include <stdlib.h>

void typeInputs(int arrayRange, char typeOfVar) {
  // typeOfVar: f = float / d = inteiro.
  printf("Digite %d %s(s) abaixo:\n", arrayRange, typeOfVar == 'f' ? "float" : "inteiro");
}

void f1() {
  // f1) Crie um vetor de 5 inteiros, inicialize com valores de 1 a 5 e imprima todos os elementos.
  int fiveToOne[5] = {1, 2, 3, 4, 5};

  for(int i = 0; i < 5; i++) {
    printf("%d", fiveToOne[i]);
    if(i != 4) printf("\n");
  }
}

void f2(int arrayRange) {
  // f2) Declare um vetor de 4 floats, leia valores do usuário e imprima-os.
  float* floatArray = (float*) malloc(arrayRange* sizeof(float));
  
  typeInputs(arrayRange, 'f');
  for(int i = 0; i < arrayRange; i += 1) scanf("%f", &floatArray[i]);

  printf("\nAbaixo os %d floats que você digitou:\n", arrayRange);
  for(int i = 0; i < arrayRange; i += 1) {
    printf("%.2f", floatArray[i]);
    if(i != arrayRange - 1) printf("\n");
  }
}

void f3(int arrayRange) {
  // f3) Crie um array de 3 chars, atribua as letras 'X', 'Y', 'Z' e imprima.
  char* arrayXYZ = (char*) malloc(arrayRange* sizeof(char));

  arrayXYZ[0] = 'X';
  arrayXYZ[1] = 'Y';
  arrayXYZ[2] = 'Z';

  for(int i = 0; i < arrayRange; i += 1) printf("%c", arrayXYZ[i]);
}

void f4(int arrayRange) {
  // f4) Declare uma string com "Oi", imprima cada caractere em uma linha.

//  char* arrayOi = (char*) malloc(arrayRange* sizeof(char)); 
/*
    Caso tenha sido dessa forma que o enunciado pede,
    basta descomentar essa variável e comentar a de baixo.
*/

  char arrayOi[2] = "Oi"; // String declarada com "Oi".

  arrayOi[0] = 'O';
  arrayOi[1] = 'i';

  for(int i = 0; i < arrayRange; i += 1) {
    printf("%c", arrayOi[i]);
    if(i != arrayRange - 1) printf("\n");
  }
}

void f5(int arrayRange) {
  // f5) Crie um vetor de 6 inteiros, leia valores e imprima apenas os pares.
  int* intArray = (int*) malloc(arrayRange* sizeof(int));

  typeInputs(arrayRange, 'i');
  for(int i = 0; i < arrayRange; i += 1) scanf("%d", &intArray[i]);

  printf("\nNúmeros pares:\n");
  for(int i = 0; i < arrayRange; i += 1) if(intArray[i] % 2 == 0) printf("%d\n", intArray[i]);
}

void f6() {
  // f6) Declare uma string com seu nome e imprima seu tamanho (sem usar <string.h>).
  char name[15] = "Lucas Henrique";

  printf("Tamanho da string: %d", (int) sizeof(name) - 1);
}

void f7() {
  // f7) Crie um vetor de 5 inteiros, inicialize com zeros e imprima.
  int fiveZeros[5] = {0, 0, 0, 0, 0};

  for(int i = 0; i < 5; i += 1) {
    printf("%d", fiveZeros[i]);
    if(i != 4) printf("\n");
  }
}

void f8() {
  // f8) Declare uma string com "Teste", substitua o primeiro caractere por 'R' e imprima.
  char phrase[6] = "Teste";

  phrase[0] = 'R';

  printf("%s", phrase);
}

void f9(int arrayRange) {
  // f9) Crie um vetor de 4 floats, leia valores e imprima o maior.
  float* floatArray = (float*) malloc(arrayRange* sizeof(float));

  typeInputs(arrayRange, 'f');
  for(int i = 0; i < arrayRange; i += 1) scanf("%f", &floatArray[i]);

  float greater, current;

  for(int i = 0; i < arrayRange; i += 1) {
    current = floatArray[i];
    if(current > greater) greater = current;
    if(i == arrayRange - 1) printf("\nMaior float: %.2f", greater);
  }
}

void f10() {
  // f10) Declare uma string, leia uma palavra do usuário (máximo 10 caracteres) e imprima-a.
  char userString[11];

  printf("Digite uma palavra: ");
  scanf("%s", userString);

  printf("\nPalavra digitada: %s", userString);
}

void f11(int arrayRange) {
  // f11) Use calloc para alocar um array de 4 inteiros, imprima seus valores (devem ser 0).
  int* intArray = calloc(arrayRange, sizeof(int));

  for(int i = 0; i < arrayRange; i += 1) printf("%d\n", intArray[i]);
}

void f12() {
  // f12) Aloque um array de 3 floats com calloc, atribua 1.5 ao primeiro elemento e imprima todos.
}

void f13() {
  // f13) Crie um programa que use calloc para alocar 5 chars, atribua 'a' ao primeiro e imprima.
}

void f14() {
  // f14) Aloque um array de 6 inteiros com calloc, verifique se a alocação foi bem-sucedida e imprima uma mensagem.
}

void f15(int arrayRange) {
  // f15) Use calloc para alocar uma string de 8 caracteres, copie "Oi" para ela e imprima.
  char* text = calloc(arrayRange, sizeof(char));

  text[0] = 'O';
  text[1] = 'i';

  printf("%s\n", text);

  free(text);
}

void f16() {
  // f16) Aloque um array de 5 inteiros com calloc, imprima, libere com free e imprima uma mensagem.
}

void f17() {
  // f17) Crie uma string com calloc para 6 caracteres, copie "Hello", imprima e libere.
}

void f18() {
  // f18) Aloque um array de 4 floats com calloc, atribua valores, libere e defina o ponteiro como NULL.
}

void f19() {
  // f19) Use calloc para 3 inteiros, verifique a alocação, libere e imprima "Memória liberada".
}

void f20() {
  // f20) Aloque um array de 5 chars com calloc, atribua 'A' ao primeiro, libere e defina o ponteiro como NULL.
}

void f21() {
  // f21) Aloque um array de 3 inteiros com calloc, redimensione para 6 com realloc, imprima e libere.
}

void f22() {
  // f22) Crie uma string com calloc para 4 caracteres, redimensione para 8, copie "Oi mundo" e libere.
}

void f23() {
  // f23) Aloque 2 floats com calloc, atribua valores, redimensione para 4, atribua mais valores, imprima e libere.
}

void f24() {
  // f24) Use calloc para alocar 5 inteiros, redimensione para 3 com realloc, imprima e libere.
}

void f25() {
  // f25) Aloque uma string com calloc para 6 caracteres, copie uma palavra do usuário, redimensione para 12, imprima e libere.
}

void main() {
// TODA CRIAÇÃO DE VETOR É USANDO MALLOC, SALVO DISPOSIÇÃO CONTRÁRIA
  
//  f1();   // Done - Verificar a forma que o professor deseja como deve ser.
//  f2(4);  // Done
//  f3(3);  // Done
//  f4(2);  // Done - Verificar comentário nessa função.
//  f5(6);  // Done
//  f6();   // Done
//  f7();   // Done - Verificar a forma que o professor deseja como deve ser.
//  f8();   // Done
//  f9(4);  // Done
//  f10();  // Done
//  f11(4);
//  f12();
//  f13();
//  f14();
//  f15(8);
//  f16();
//  f17();
//  f18();
//  f19();
//  f20();
//  f21();
//  f22();
//  f23();
//  f24();
//  f25();

//  Done: 10/25 
}
