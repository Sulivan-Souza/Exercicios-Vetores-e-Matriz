#include <iostream>
#include <cstring>
using namespace std;

int main (){
char nome[50];
int tam;
char ch;
cout << "Digite um nome: " << endl;
cin.getline(nome,50);
cout << "Digite uma letra: " << endl;
cin >> ch;
tam = strlen(nome);
for (int i =0; i < tam; i++){
 if (nome[i]==ch){
 cout << "O caractere se encontra na posicao: " << i+1 << endl;
break;
 }
 if(i ==(tam -1))
    {
 cout << "Nao existe o caractere " << ch << " no texto digitado." << endl;
 }
}
return 1;
}
