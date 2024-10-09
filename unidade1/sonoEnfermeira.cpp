#include <iostream>
using namespace std;

int main () {
    // Primeira linha representa a hora atual
    // Segunda linha representa a hora do despertador
    // Objetivo: Enviar para a saida a diferenca entre as horas como minutos inteiros

    int horaAtual, minutoAtual, horaDespertador, minutoDespertador;
    int horaAtualReal, horaDespertadorReal;

    cout << "Insira que horas sao no momento" << endl;
    cin >> horaAtual >> minutoAtual;
    
    cout << "Agora insira o horario do despertador" << endl;
    cin >> horaDespertador >> minutoDespertador;

    horaAtualReal = ((horaAtual * 60) + minutoAtual);
    horaDespertadorReal = ((horaDespertador * 60) + minutoDespertador);

    cout << "A diferenca em minutos dos dois horarios eh: " << horaDespertadorReal - horaAtualReal << endl;
    return 0;
}