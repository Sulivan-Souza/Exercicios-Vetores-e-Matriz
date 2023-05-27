/*O Departamento de Computação deseja saber se existem alunos cursando,
simultaneamente, as disciplinas D1 e D2. Existe disponível uma listagem com os números de
matrículas dos alunos das duas disciplinas. Após ler essas listagens verifique quem são os
alunos.*/


#include <stdio.h>


#define Q_ALUNOS 5


int main()
{
    int d1[ALUNOS], d2[ALUNOS], quantidade_alunos = 0;
    int contador1, contador2;

    for (contador1 = 0; contador1 < ALUNOS; contador1++) {
        printf("Digite o aluno da matricula [%d] da turma d1\n", contador1);
        scanf("%d%*c",&d1[contador1]);
    }

    for (contador1 = 0; contador1 < ALUNOS; contador1++) {
        printf("Digite o aluno da matricula [%d] da turma d2\n", contador1);
        scanf("%d%*c",&d2[contador1]);
    }

    for (contador1 = 0; contador1 < ALUNOS; contador1++) {
        for (contador2 = 0; contador2 < ALUNOS; contador2++) {
            if (d1[contador1] == d2[contador2]) {
                printf("O aluno %i esta matriculado na matricula [%d] da turma d1 e na matricula [%d] da turma d2\n", d1[contador1], contador1, contador2);
            }
        }
    }
    return(0);
}