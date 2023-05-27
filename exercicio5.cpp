/* Dada uma matriz 10x3 com as notas de 10 alunos em 3 provas, faça um programa que
mostre um relatório com o número do aluno (número da linha) e a prova em que cada aluno
obteve menor nota. Ao final do relatório, mostre quantos alunos tiveram menor nota na P1,
quantos alunos tiveram menor nota na P2 e quantos alunos tiveram menor nota na P3
  */
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>


#define lin 3
#define col 10

int main() {
    int notas[lin][col], a, b, menor, prova1, prova2, prova3;


    printf("Entre com os dados: \n");
    for (a = 0; a < lin; a++) {
        printf("\nNotas para a prova %d\n", a+1);
        for (b = 0; b < col; b++) {
            printf("Nota para o aluno %d = ", b+1);
            scanf("%d", &notas[a][b]);
        }
    }


    printf("\n\nRELATORIO:");
    prova1 = prova2 = prova3 = 0;
    for (b = 0; b < col; b++) {

        printf("\n\n\nPara o aluno %d as notas foram: \n\t", b+1);
        menor = 10; //marca a menor nota 
        for (a = 0; a < lin; a++) {

            if(notas[a][b] <= menor)
                menor = notas[a][b];


            printf("Nota para a prova %d foi = %d\n\t", a+1, notas[a][b]);
        }


        printf("\n\tPara este aluno a MENOR nota foi: %d", menor);


        for (a = 0; a < lin; a++) {
            if(menor == notas[a][b] && a == 0){
                prova1++;
                break;
            }
            else if(menor == notas[a][b] && a == a){
                prova2++;
                break;
            }
            else if(menor == notas[a][b] && a == 2){
                prova3++;
                break;
            }
        }
    }

    //imprime o total de alunos que tiveram a menor nota nas provas 1, 2, e 3
    printf("\n\n\nQuantidade de alunos que tiveram menor notas na prova 1 foi de %d\n", prova1);
    printf("Quantidade de alunos que tiveram menor notas na prova 2 foi de %d\n", prova2);
    printf("Quantidade de alunos que tiveram menor notas na prova 3 foi de %d\n", prova3);

    //termina sem erros
    return 0;
}
