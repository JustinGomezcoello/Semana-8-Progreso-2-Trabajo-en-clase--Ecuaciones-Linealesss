#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
  float A[3][3];
  float B[3][1];

  printf("Ingrese el primer valor de X\n");
  scanf("%f", &A[0][0]);

  printf("Ingrese el primer valor de Y\n");
  scanf("%f", &A[0][1]);

  printf("Ingrese el primer valor de Z\n");
  scanf("%f", &A[0][2]);

  printf("Ingrese el primer valor de igualdad de la primera ecuacion\n");
  scanf("%f", &B[0][0]);

  printf("Ingrese el segundo valor de X\n");
  scanf("%f", &A[1][0]);

  printf("Ingrese el segundo valor de Y\n");
  scanf("%f", &A[1][1]);

  printf("Ingrese el segundo valor de Z\n");
  scanf("%f", &A[1][2]);

  printf("Ingrese el segundo valor de igualdad de la primera ecuacion\n");
  scanf("%f", &B[1][0]);

  printf("Ingrese el tercer valor de X\n");
  scanf("%f", &A[2][0]);

  printf("Ingrese el tercer valor de Y\n");
  scanf("%f", &A[2][1]);

  printf("Ingrese el tercer valor de Z\n");
  scanf("%f", &A[2][2]);

  printf("Ingrese el tercer valor de igualdad de la primera ecuacion\n");
  scanf("%f", &B[2][0]);
  calculos( A,B);
  return 0;
}
