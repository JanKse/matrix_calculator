#include <stdio.h>

#include "matrix.h"

#include <stdlib.h>

void print_matrix(struct matrix X) {
  printf("\n");
  for (int i = 0; i < X.rows; i++) {
    printf("\t");
    for (int j = 0; j < X.cols; j++) {
      printf("%d\t", X.element[i][j]);
    };
    printf("\n");
  }

}
void print_matrices(struct matrix A, struct matrix B){
  printf("\n");
  for (int i = 0; i < A.rows; i++)
  {
    for (int j = 0; j < A.cols; j++)
    {
      printf("%d\t", A.element[i][j]);
    }
    printf("|   ");
    for (int k = 0; k < B.cols; k++)
    {
      printf("%d\t", B.element[i][k]);
    }
    
    printf("\n");
  }
  
}
int menu(void) {
  system("cls");
  int choice;
  printf("\n\n");
  printf("\t\t#######################\n");
  printf("\t\t#  MATRIX CALCULATOR  #\n");
  printf("\t\t#######################\n\n");
  for (int i = 0; i < 50; i++) {
    printf("#");
  }
  printf("\n\n");
  printf("[1]\t Adding matrices\n");
  printf("[2]\t Subtracting matrices\n");
  printf("[3]\t Scalar multiplication\n");
  printf("[4]\t Matrix multiplication\n");
  printf("[5]\t Matrix transposition\n\n");
  printf("[6]\t Exit aplication\n\n");
  for (int i = 0; i < 50; i++) {
    printf("#");
  }
  printf("\n\nEnter your choice : \t");
  scanf("%d", & choice);
  printf("%d", choice);
  return choice;
}









struct matrix get_matrix(void){
  struct matrix A;

  printf("Write count of rows:\t");
  scanf("%d",&(A.rows));
  printf("Write count of cols:\t");
  scanf("%d",&(A.cols));
  A=allocate_memory_for_matrix(A.rows,A.cols,A);
  
  for (int i = 0; i < A.rows; i++)
  {
    for (int j = 0; j < A.cols; j++)
    {
      printf("Enter value for matrix[%d][%d] : ", i,j);
      scanf("%d", &(A.element[i][j]));
    }
    
  }
  
  return A;
}
struct matrix allocate_memory_for_matrix(int m, int n, struct matrix A){
  A.rows=m;
  A.cols=n;
  A.element=malloc(A.rows*sizeof(int*));
  for (int i = 0; i < A.rows; i++)
  {
    A.element[i]=malloc(A.cols*sizeof(int*));
  }
  return A;
}

int get_scalar(void){
  int a;
  printf("Your scalar : ");
  scanf("%d", &a);
  return a;
}

void free_matrix(struct matrix A){
  for (int  i = 0; i < A.rows; i++)
  {
    free(A.element[i]);
  }
  free(A.element);
}