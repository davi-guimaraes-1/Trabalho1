#include <stdio.h>
#include "vetores.h"

void stop(int i) { //0 - Encerra
  printf("Quantidade de ações executadas: %d", i);
}

void init(int array[]) { //1  - Cria o vetor
  int i;

  for (i = 0; i < 10; i++) {
    printf("\nInforme o valor para a posição %d: ", i);
    scanf("%d", &array[i]);
  }
  printf("\nVetor criado!\n\n");
}

void print(int array[]) { //2 - Imprime o vetor
  int i;
  
  printf("\nVetor = [");
  for (i = 0; i < 10; i++) {
    printf("  %d  ", array[i]);
  }
  printf("]\n\n");
}

void print_inverse(int array[]) { //3 - Imprime o vetor ao contrário
//Henrique
int i; 
for(i=9; i >= 0; i--){
  printf("| %d |", array[i]);
}
}
void print_unit(int array[], int pose) { //4 - Imprime um valor específico do vetor
  //Henrique
  for(i=0; i < 9; i++){
  if(i == pose){
    printf("\n\nO numero %d esta presente na posição %d do vetor\n\n", array[i], i);
  }
  }
}

void change(int array[], int pose, int value) { //5 - Troca um valor do vetor
  array[pose] = value;
}

void bigger(int array[]) { //6 - Imprime o maior valor do vetor
  int m;
  
  m = nbigger(array, 0);
  
  printf("\nMaior valor: %d\nPosição: %d", array[m], m);
}

void smaller(int array[]) { //7 - Imprime o menor valor do vetor
  int m;
  
  m = nsmaller(array, 0);
  
  printf("\nMaior valor: %d\nPosição: %d", array[m], m);
} 

float average(int array[]) { //8 - Retorna a média dos valores do vetor
  printf("Não está pronto ainda!");
}

int interval(int array[], int ki, int kj) { //9 - Retorna a quantidade de valores entre o intervalo (ki, kj)
  printf("Não está pronto ainda!");
}

int nbigger(int array[], int n) { //10 - Retorna a posição do maior valor a partir de uma posição N
  int i, m = n;

  for (i = n; i < 10; i++) {
    m = array[i] > array[m] ? i : m;
  }
  
  return m;
}

int nsmaller(int array[], int n) { //11 - Retorna a posição do menor valor a partir de uma posição N
  int i, m = n;

  for (i = n; i < 10; i++) {
    m = array[i] < array[m] ? i : m;
  }
  
  return m;
}

void swap(int array[], int p1, int p2) { //12 - Realiza a permuta entre 2 valores do vetor
  printf("Não está pronto ainda!");
}

void copy(int array[], int copy[]) { //13 - Copia o vetor para outro
  int i;
  
  for (i = 0; i < 10; i++) {
    change(copy, i, array[i]); 
  } 
}

void paste(int array[], int copy[]) { //14 - Cola o vetor auxiliar no vetor principal
  copy(copy, array);
}

void sort(int array[]) { //15 - Organiza o vetor em ordem crescente
  printf("Não está pronto ainda!");
}

void credits() { //16 - Exibe os créditos da aplicação
  printf("Não está pronto ainda!");
}
