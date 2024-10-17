#include <iostream>

using namespace std;

// Contar quantos são maiores de 18 anos

/* Faça um programa que lê a idade de 6 pessoas e diz quantas delas são maiores de 18
anos!  Nesse programa precisaremos criar um segundo contador! 
O programa precisa de um contador para contar quantas vezes o programa vai repetir.
Independente disso, ele vai precisar de um segundo contador para contar quantas vezes
foi encontrada uma pessoa com mais de 18 anos neste grupo. São dois contadores 
diferentes, e portanto, duas variáveis distintas. A equação da contagem, você já conhece.*/


int main () {
    int idade, maiorIdade, contador;

    maiorIdade = 0;
    contador = 6;

    for (int i = 0; i < contador; i++)
    {
        cin >> idade;

        if (idade >= 18)
        {
            maiorIdade++;
        }
    }
    
    cout << maiorIdade << endl;

    return 0;
}