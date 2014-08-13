#include <stdio.h>
#include <stdlib.h>
#include "tutorials.h"

int main() 
{
  printf("----OUTPUT EXERCICIO UM----\n");
  problem_one();

  printf("\n----OUTPUT EXERCICIO DOIS----\n");
  problem_two();

  printf("\n----OUTPUT EXERCICIO TRES----\n");
  problem_tree();

  printf("\n----OUTPUT EXERCICIO QUATRO----\n");
  problem_four();

  printf("\n----OUTPUT EXERCICIO CINCO----\n");
  problem_five();

  printf("\n----OUTPUT EXERCICIO SEIS----\n");
  problem_six();


  return(EXIT_SUCCESS);
}

void get_user_input(int vet[], int size) 
{
  for(int i = 0; i < size; i++) {
    int userInput;
    printf("vet[%d]=", i);
    scanf("%d", &userInput);
    vet[i] = userInput;
  }
}

void print_values(int vet[], int size) 
{
  for(int i = 0; i < size; i++)
    printf("vet[%d]=%d\n",i,vet[i]);
}

int max_value(int vet[], int size) 
{
  int max = -32000;

  for(int i = 0; i < size; i++) {
    if(vet[i] > max)
      max = vet[i];
  }

  return(max);
}

int min_value(int vet[], int size) 
{
  int min = 32000;

  for (int i = 0; i < size; i++) {
    if (vet[i] < min)
      min = vet[i];
  }

  return(min);
}

void problem_one() 
{
  int vet[50];
  for(int i = 0; i < 50; i++) {
    vet[i] = 0;
    printf("vet[%d]=%d",i,vet[i]) ;
  }
}

void problem_two() 
{
  int vet[30];
  get_user_input(vet, 30);
}

void problem_tree() 
{
  int vet[15];
  vet[10] = 30;

  for(int i = 0; i < 15; i++) {
    if(vet[i] == 30)
      printf("vet[%d]=30",i);
  }
}

void problem_four() 
{
  int vet[10];
  get_user_input(vet,10);
  printf("\nSeu vetor eh:\n");
  print_values(vet, 10);
}

void problem_five() 
{
  int vet[20];
  get_user_input(vet, 20);
  printf("O mair valor foi: %d", max_value(vet, 20));
}

void problem_six() 
{
  int quantSeq;
  printf("Informe quantos numeros voce quer inserir?\n");
  scanf("%d", &quantSeq);
  int vet[quantSeq];
  get_user_input(vet, quantSeq);
  int amplitude = max_value(vet, quantSeq) - min_value(vet, quantSeq);
  printf("\nA amplitude eh: %d", amplitude);
}
