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

void adding_matrices(void) {
  int y_n = 121;
  
  do {
    system("cls");
    struct matrix A=get_matrix();
    struct matrix B=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    printf("\n########################## ADDING MATRICES ##########################\n\n");
    printf("\n_______________ YOUR MATRICES _______________\n");
    print_matrices(A,B);
    printf("___________________________________________\n\n");

    if (A.rows == B.rows && A.cols == B.cols) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          Z.element[i][j] = A.element[i][j] + B.element[i][j];
        }
      }
      printf("_______________ RESULT ____________________\n");
      print_matrix(Z);
      printf("___________________________________________\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    } else {
      printf("\n\nError... you cannot adding matrices with different columns or rows\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    }

  } while (y_n != 'y');

}

void subtracting_matrices(void) {
  int y_n = 121;
  
  do {
    system("cls");
    struct matrix A=get_matrix();
    struct matrix B=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    printf("\n########################## SUBTRACING MATRICES ##########################\n\n");
    printf("\n_______________ YOUR MATRICES _______________\n");
    print_matrices(A,B);
    printf("___________________________________________\n\n");
    if (A.rows == B.rows && A.cols == B.cols) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          Z.element[i][j] = A.element[i][j] - B.element[i][j];
        }
      }
      printf("_______________ RESULT ____________________\n");
      print_matrix(Z);
      printf("___________________________________________\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    } else {
      printf("\n\nError... you cannot subtracting matrices with different columns or rows\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    }

  } while (y_n != 'y');

}

void multiplication_matrix(void) {
  int y_n = 121;
  
  int k;
  do {
    system("cls");
    struct matrix A =get_matrix();
    struct matrix B =get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,B.cols,Z);
    
    printf("\n########################## MULTIPLICATION MATRICES ##########################\n\n");
    printf("\n_______________ YOUR MATRICES _______________\n");
    print_matrices(A,B);
    printf("___________________________________________\n\n");

    if (A.rows == B.cols && A.cols == B.rows) {
      for (int i= 0; i < Z.rows; i++)
      {
        for (int j = 0; j < Z.cols; j++)
        {
          Z.element[i][j]=0;
        }
        
      }
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          for (Z.element[i][j], k = 0; k < A.cols; k++) {
            Z.element[i][j] += A.element[i][k] * B.element[k][j];
          }
        }
      }
      
      printf("_______________ RESULT ____________________\n");
      print_matrix(Z);
      printf("___________________________________________\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    } else {
      printf("\n\nError... you cannot subtracting matrices with different columns or rows\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    }
    printf("%d", y_n);
  } while (y_n != 'y');

}

void scalar_multiplication(void){
int y_n=121; 
do
{
  system("cls");
  struct matrix A=get_matrix();
  int scalar=get_scalar();
  printf("\n########################## SCALAR MULTIPLACATION ##########################\n\n");
  printf("\n_______________ YOUR SCALAR _______________\n");
  printf("\t%d",scalar);
  printf("\n___________________________________________\n\n");
  printf("\n_______________ YOUR MATRIX _______________\n");
  print_matrix(A);
  printf("___________________________________________\n\n");
  for (int i = 0; i < A.rows; i++)
  {
    for (int j = 0; j < A.cols; j++)
    {
      A.element[i][j]*=scalar;
    }
    
  }
  printf("_______________ RESULT ____________________\n");
  print_matrix(A);
  printf("___________________________________________\n\n");
  printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);

} while (y_n!='y');

}

void matrix_transposition(void){

  
  
  int y_n=121;
  do
  {
    system("cls");
    struct matrix A=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    system("cls");
    printf("\n########################## MATRIX TRANSPOSITION ##########################\n\n");
    printf("\n_______________ YOUR MATRIX _______________\n");
    print_matrix(A);
    printf("___________________________________________\n\n");
    for (int i = 0; i < A.rows; i++)
    {
      for (int j = 0; j < A.cols; j++)
      {
        Z.element[i][j]=A.element[j][i];
      }
      
    }
  printf("_______________ RESULT ____________________\n");
  print_matrix(Z);
  printf("___________________________________________\n\n");
  free(Z.element);
  printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
  } while (y_n!='y');
  
  
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