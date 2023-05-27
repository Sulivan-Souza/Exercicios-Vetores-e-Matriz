/*Desenvolva um programa que efetue a leitura de 10 elementos e os coloque num vetor A.
No final apresente o total da soma de todos os elementos que sejam ímpares*/


#include <iostream>

using namespace std;

int main( ) {
 int i, r, soma, vetorA [10];
  soma = 0;
    for (i = 0; i < 10; i++) {
 cout << "Digite valor "<<(i+1)<<" : ";
 cin >> vetorA[i];
 }
    for (i = 0; i < 10; i++) {
 r = vetorA[i]%2;
    if (r != 0) {
 soma = soma + vetorA[i];
    }
 }
 cout << "Soma dos impares: "<<soma;

 return 0;
}
