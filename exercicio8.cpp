/*Elabore um programa para ler um conjunto de 100 números inteiros, contar e escrever
quantos deles são superiores a média aritmética do conjunto, e quantos são inferiores. Mostre
os resultados.*/



#include <iostream>

using namespace std;

#include <stdio.h>

float mediaVetor(float vet[], int tam) {
    float media, soma = 0;
    int i;

    for(i = 0; i < tam; i++){
        soma += vet[i];
    }

    media = soma / tam;

    return media;
}

int main(){
    float vetor[6] = {3.0, 4.3, 5.6, 2.8, 7.9, 3.4};
    float resultado;

    resultado = mediaVetor(vetor, 6);
    printf("A media dos vetores e de %.2f\n", resultado);
    printf(" os numeros  maiores que a media: %.2f ", resultado );
}