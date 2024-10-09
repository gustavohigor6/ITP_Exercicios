#include <iostream>
using namespace std;

int main () {
    // Primeira linha contém o número N de posições 
    // Segunda linha contém a posição do disco voador
    // Terceira linha contém a posição do avião
    unsigned char posicoes;
    unsigned char disco;
    unsigned char aviao;

    cout << "Indique quantas posicoes podemos ter no jogo" << endl;
    cin >> posicoes;

    cout << "Indique em que posicao o disco voador se encontra" << endl;
    cin >> disco;

    cout << "Indique em que posicao o aviao esta no momento" << endl;
    cin >> aviao;

    // dá para resolver sem condicionais? 

    return 0;
}