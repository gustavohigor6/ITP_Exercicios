#include <iostream>
using namespace std;

// A melhor trilha
/* Escreva um programa em C que determine o nível da trilha mais adequado para uma 
pessoa baseado em sua experiência e saúde física. Primeiro, o programa deve ler o 
número de trilhas que a pessoa já fez. A avaliação inicial é feita conforme a tabela:
0<=T<5 Iniciante, 5<=T<20 Vide avaliação #1 da saúde física, t>=20 Vide avaliação #2
da saúde física*/

int main () {
    int trilhasRealizadas;

    cin >> trilhasRealizadas;

    if (trilhasRealizadas == 0 || (trilhasRealizadas > 0 && trilhasRealizadas < 5)) {
        cout << "Iniciante" << endl;
    }
    else {
        if (trilhasRealizadas >= 5 && trilhasRealizadas < 20) {
            int saudeFisica;
            cin >> saudeFisica;
            // 0 = Regular ; 1 = Boa
            
            if (saudeFisica == 0) {
                cout << "Iniciante" << endl;
            }
            else {
                cout << "Intermediário" << endl;
            }
        }
        else {
            if (trilhasRealizadas >= 20) {
                int saudeFisica;
                cin >> saudeFisica;
                // 0 = Regular ; 1 = Boa
                
                if (saudeFisica == 0) {
                    cout << "Intermediário" << endl;
                }
                else {
                    cout << "Avançado" << endl;
                }
            }
        }
    }

    return 0;
}