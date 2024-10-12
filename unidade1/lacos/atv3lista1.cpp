#include <iostream>

using namespace std;

// Soma de valores ímpares

/* Leia um valor inteiro N que é a quantidade de casos que o programa vai executar.
Cada caso consiste de dois inteiros X e Y, informados pelo usuário. Seu programa
deve apresentar a soma de todos os ímpares existentes entre X e Y, não incluindo os
dois. OBS: Assuma que X sempre será menor que Y.*/


int main () {
    //Dados iniciais
    int qntdCasos, caso = 1;

    cin >> qntdCasos;
    
    while (caso <= qntdCasos) { /* Laço para realizar o cálculo pela qntd escolhida */
        int valorX, valorY, aux = 1, calculoValidacaoImpar, somaImpares = 0;
        cin >> valorX >> valorY;

        aux += valorX; /* Identificação do valor posterior ao X */
        do
        {
            calculoValidacaoImpar = aux % 2; /* Validação organizada fora da condicional */

            if (calculoValidacaoImpar != 0 && aux != valorY) {
                somaImpares += aux; /* Soma do valor impar com os próximos encontrados */
                aux++;
            } else {
                aux++; /* Método para não entrar em um laço sem fim */
            }
        } while (aux < valorY);
        /*
        while (aux < valorY) {
        calculoValidacaoImpar = aux % 2;

            if (calculoValidacaoImpar != 0) {
                somaImpares += aux;
                aux++;
            } else {
                aux++;
            }
        } */
       
        cout << somaImpares << endl;
        caso++;
    }    
    return 0;
}