#include <iostream>

using namespace std;

// Reabertura do RU
/* Para fazer uma estimativa, a Pró-reitoria solicitou pra você um programa que indique se os recursos 
recebidos são suficientes ou não para um determinado valor de auxílio e uma determinada quantidade de alunos.

Entrada
Seu programa deve ler 3 números inteiros R, A e N, representando em R$ respectivamente o total de recursos 
recebidos pela universidade (R), o valor do auxílio alimentação (A) e o número de alunos contemplados com o 
auxílio (N).

Saída
Seu programa deve enviar para a saída (imprimir) "S" se for possível fornecer o auxílio a todos os alunos 
contemplados ou "N" se não for possível.
*/

int main () {
    int R, A, N, calculo;

    cin >> R >> A >> N;

    calculo = (A * N);

    if (R >= calculo)
    {
        cout << "S" << endl;
    } else 
    {
        cout << "N" << endl;
    }

    return 0;
}