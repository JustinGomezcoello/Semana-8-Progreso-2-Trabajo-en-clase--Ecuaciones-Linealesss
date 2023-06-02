#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"
void calculos(float A[3][3], float B[3][1]){

  float Coeficiente1 = (1) * ((A[1][1] * A[2][2]) - (A[2][1] * A[1][2]));

  float Coeficiente2 = (-1) * ((A[0][1] * A[2][2]) - (A[2][1] * A[0][2]));

  float Coeficiente3 = (1) * ((A[0][1] * A[1][2]) - (A[1][1] * A[0][2]));

  float Determinante_A = ((A[0][0] * Coeficiente1) + (A[1][0] * Coeficiente2) + (A[2][0] * Coeficiente3));

  float Coeficiente4 = (1) * ((A[1][1] * A[2][2]) - (A[2][1] * A[1][2]));
  float Coeficiente5 = (-1) * ((A[0][1] * A[2][2]) - (A[2][1] * A[0][2]));
  float Coeficiente6 = (1) * ((A[0][1] * A[1][2]) - (A[1][1] * A[0][2]));
  float detx = (B[0][0] * Coeficiente4) + (B[1][0] * Coeficiente5) + (B[2][0] * Coeficiente6);
  float x = detx / Determinante_A;
  printf("x= %.2f\n", x);
  float Coeficiente7 = (1) * ((B[1][0] * A[2][2]) - (B[2][0] * A[1][2]));
  float Coeficiente8 = (-1) * ((B[0][0] * A[2][2]) - (B[2][0] * A[0][2]));
  float Coeficiente9 = (1) * ((B[0][0] * A[1][2]) - (B[1][0] * A[0][2]));
  float dety = (A[0][0] * Coeficiente7) + (A[1][0] * Coeficiente8) + (A[2][0] * Coeficiente9);
  float y = dety / Determinante_A;

  printf("y= %.2f\n", y);

  float Coeficiente10 = (1) * ((A[1][1] * B[2][0]) - (A[2][1] * B[1][0]));
  float Coeficiente11 = (-1) * ((A[0][1] * B[2][0]) - (A[2][1] * B[0][0]));
  float Coeficiente12 = (1) * ((A[0][1] * B[1][0]) - (A[1][1] * B[0][0]));
  float detz = (A[0][0] * Coeficiente10) + (A[1][0] * Coeficiente11) + (A[2][0] * Coeficiente12);
  float z = detz / Determinante_A;
  printf("z= %.2f\n", z);
  }