#include <iostream>

using namespace std;

//100 metros rasos

/* Na etapa classificatória, os participantes têm direito a 3 tentativas, sendo o menor
tempo sua nota final. Então, sua melhor distância é comparada a uma nota de corte, caso
seja menor ou igual, o participante é aprovado para a próxima etapa. Você ficou
responsável por escrever um programa que lê tempos de um atleta, e a nota de corte, 
nessa ordem. Seu programa deve escolher a melhor distância do atleta, e verificar se
ele atingiu ou ultrapassou a nota de corte. */

int main () {
    float tempo1, tempo2, tempo3, melhorTempo, corte;

    cin >> tempo1 >> tempo2 >> tempo3 >> corte;

    if (tempo1 < tempo2 && tempo1 < tempo3) {
        melhorTempo = tempo1;
    } else if (tempo2 < tempo1 && tempo2 < tempo3) {
        melhorTempo = tempo2;
    } else if (tempo1 == tempo2) {
        if (tempo1 < tempo3) {
            melhorTempo = tempo1;
        } else {
            melhorTempo = tempo3;
        }
    } else if (tempo1 == tempo3) {
        if (tempo1 < tempo2) {
            melhorTempo = tempo1;
        } else {
            melhorTempo = tempo2;
        }
    } else {
        if (tempo2 < tempo1) {
            melhorTempo = tempo2;
        } else {
            melhorTempo = tempo1;
        }
    }

    if (melhorTempo <= corte) {
        cout << "Atleta aprovado com tempo " << melhorTempo << "s e nota de corte " << corte << "s" << endl;
    } else {
        cout << "Atleta reprovado com tempo " << melhorTempo << "s e nota de corte " << corte << "s" << endl;
    }

    return 0;
}