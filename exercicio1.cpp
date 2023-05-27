
//exercio 01

/*Construir um algoritimo que leia um conjunto A de 20 elementos, construa e imprima
outro conjunto B da seguinte forma: 
Os elementos de indice pares correspondente a A³
Os elementos de indice impares correspondente A/2*/

#include <stdio.h>
#include <math.h>
#define MAX 5

int main()
{
    int impar[MAX];
    int par[MAX];
    int numeros[MAX];
    int i;
    int contaPar = 0;
    int contaImpar = 0;
    int Aocubo [MAX];

        for(i=0;i<MAX;i++) 
    {
        printf("Digite o %d numero : ", i + 1);
        scanf("%d", &numeros[i]);
    }
        printf("\n imprimindo todos os %d valores\n", MAX);
            for(i=0;i<MAX;i++)
    {
        printf("%d - %d\n", i + 1 , numeros[i]);
    }
    printf("\n imprimindo todos os %d  valores elevado ao cubo\n",MAX);

    for(i = 0;i < MAX; i++)
    {
        Aocubo[i] =pow(numeros[i], 3);
        printf("%d - %d\n",i +1, Aocubo[i]);
    }
    for(i=0;i<MAX;i++)
    {
        if( Aocubo[i] % 2 )
        {
            impar[contaImpar] = Aocubo[i];
            contaImpar++;
        }
        else
        {
            par[contaPar] = Aocubo[i];
            contaPar++;
        }
    }
    printf("\nimprimindo todos numeros pares\n");
    for(i=0;i<contaPar;i++)
    {
        printf("%d - %d\n", i + 1  , par[i]);
    }
    printf("\nimprimindo todos numeros impares\n");
    for(i=0;i<contaImpar;i++)
    {
        printf("%d - %d\n", i + 1 , impar[i]);
    }

    return 0;
}   
    

