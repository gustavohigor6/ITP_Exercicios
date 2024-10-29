#include <iostream>

using namespace std;

//Soma dos dígitos
/* Escreva um programa que lê um número inteiro n e imprime a soma
dos dígitos desse número. */

int main () {
  int num, contador, soma;

  soma = 0;
  cin >> num;

  do
  {
    contador = (num % 10);
    num /= 10;
    soma += contador;

  } while (num > 0);
  
  cout << soma << endl;
  
  return 0;
}
