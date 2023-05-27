/*Ler dois vetores, o A com 20 elementos e o B com 30 elementos. Construir um vetor C
sendo este a junção dos outros dois vetores. Assim, C terá 50 elementos.*/

#include <stdio.h>
#include <iostream>

#define MaxA 5 // define o tam max do vetor
#define MaxB 6

int main()
{

    int vetor1[MaxA], vetor2[MaxB], vetor3[MaxA + MaxB], i;
    // ler o vetor 1
    for (i = 0; i < MaxA; i++)
    {
        printf("\n digite o %d valor da vetor A: ", i + 1);
        scanf("%d", &vetor1[i]);
        // ler vetor 2
    }
    for (i = 0; i < MaxB; i++)
    {
        printf("\n digite o %d valor da vetor B: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    for (i = 0; i < MaxA + MaxB; i++)
    {
        vetor3[i] = vetor1[i];
    }
    for (i = 0; i < MaxA + MaxB; i++)
    {
        vetor3[i] = vetor2[i];
    }
    printf("\n");
    // mostra valores para o primeiro vetor
    printf("Vetor 1: ");
    for (i = 0; i < MaxA; i++)
    {
        printf("%i ", vetor1[i]);
    }
    printf("\n");

    // mostra valores para o segundo vetor
    printf("Vetor 2: ");
    for (i = 0; i < MaxB; i++)
    {
        printf("%i ", vetor2[i]);
    }
    printf("\n");
    // mostrar valores terceiro vetor
    printf("vetor 3 : ");
    for (i = 0; i < MaxB + MaxA; i++)
    {
        printf("%i  ", vetor3[i]);
    }
}
