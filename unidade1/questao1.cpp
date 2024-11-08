#include <iostream>

using namespace std;

/* Escreva um programa para informar qual o menor intervalo de tempo (em segundos) entre dois pulos consecutivos realizados pelo jogador. 
Por exemplo, se o jogador saltou nos segundos 3, 6, 9, 12, 14 e 15, o menor intervalo entre dois saltos foi entre os pulos nos segundos 14 e 15. 
Logo, o menor intervalo de tempo entre dois pulos foi de 1 segundo.*/

int main ()
{
// Declaração e a entrada das variáveis globais utilizadas
    int n, deltaT1, deltaT2, menorTempo;

    cin >> n;

    int matriz[n];

// Entrada de dados no array
    for (int i = 0; i < n; i++)
    {
        cin >> matriz[i];
    }

// Conclusão da questão
    deltaT1 = (matriz[1] - matriz[0]);
    if (n == 2)
    {
        menorTempo = deltaT1;
    } else {
        for (int i = 2; i < n; i++)
        {
            deltaT2 = (matriz[i] - matriz[i - 1]);
            if (deltaT1 < deltaT2)
            {
                menorTempo = deltaT1;
            } else {
                menorTempo = deltaT2;
                deltaT1 = deltaT2;
            }
        }
    }
    cout << menorTempo << endl;
// 100% de acertos
    return 0;
}
