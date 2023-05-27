//exercicio 3
/*Construir um algoritmo que, dado um vetor A de 20 elementos, calcule e escreva:
S=(A1-A19)²+(A1-A18)²+..+(A9-A10)²
*/


#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define tam 20

int main(){

int vetorA[10],vetorB[10];
int i;
// lendo o Valor de A
for (i = 0; i < 10; i ++){
  printf(" \n- Digite o valor do vetorA %d : ", i +1);
  scanf("%d", &vetorA[i]);

  }
  for (i = 0; i < 10; i ++){
  printf("vetorA[%d] = %d\n:", i, vetorA[i]);
  }
  

    vetorB[0] = pow((vetorA[0]-vetorA[9]),2);
    vetorB[1] = pow((vetorA[1]-vetorA[8]),2);
    vetorB[2] = pow((vetorA[2]-vetorA[7]),2);
    vetorB[3] = pow((vetorA[3]-vetorA[6]),2);
    vetorB[4] = pow((vetorA[4]-vetorA[5]),2);
    vetorB[5] = pow((vetorA[5]-vetorA[4]),2);
    vetorB[6] = pow((vetorA[6]-vetorA[3]),2);
    vetorB[7] = pow((vetorA[7]-vetorA[2]),2);
    vetorB[8] = pow((vetorA[8]-vetorA[1]),2);
    vetorB[9] = pow((vetorA[9]-vetorA[0]),2);
    printf("\nvetorB [0]:= %d\n", vetorB[0]);
    printf("\nvetorB [1]:= %d\n", vetorB[1]);
    printf("\nvetorB [2]:= %d\n", vetorB[2]);
    printf("\nvetorB [3]:= %d\n", vetorB[3]);
    printf("\nvetorB [4]:= %d\n", vetorB[4]);
    printf("\nvetorB [5]:= %d\n", vetorB[5]);
    printf("\nvetorB [6]:= %d\n", vetorB[6]);
    printf("\nvetorB [7]:= %d\n", vetorB[7]);
    printf("\nvetorB [8]:= %d\n", vetorB[8]);
    printf("\nvetorB [9]:= %d\n", vetorB[9]);

}




