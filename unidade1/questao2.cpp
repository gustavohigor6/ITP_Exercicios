#include <iostream>

using namespace std;

/* Escreva um programa para calcular o tempo total de jogo, ou seja quantos segundos levarão até o jogador colidir com um obstáculo. 
Nessa versão do jogo, os obstáculos virão sempre em espaço regulares de tempo. Por exemplo, se os obstáculos vierem a cada 3 segundos, 
eles virão nos segundos 3, 6, 9, 12 e assim por diante. O jogador deverá, portanto, pular nos segundos 2, 5, 8, 11 e assim por diante.

A entrada de dados do problema consiste em duas linhas. A primeira possui três valores inteiros, T, O e P, indicando respectivamente 
quantos segundos levarão para o primeiro obstáculo aparecer (T), qual o intervalo em segundos que os novos obstáculos aparecerão (O) 
e quantos pulos o jogador dará (P). A segunda linha possui uma sequência de P valores inteiros com o tempo em segundos de cada pulo do jogador.

A saída de dados consiste em um único valor inteiro indicando o tempo do jogo (ou seja, até bater em um obstáculo).*/

int main ()
{   
    int T, O, P, ultimoObstaculo, ultimoPulo, primeiroPulo, bateu;

    cin >> T >> O >> P;

    int pulos[P];

    for (int i = 0; i < P; i++)
    {
        cin >> pulos[i];
    }
    
    ultimoPulo = pulos[P - 1];
    ultimoObstaculo = (T+(O*P));

    int obstaculos[ultimoObstaculo]{0};
    
    int contador, contador1;
    contador = 0;

    for (int i = (T); i < ultimoObstaculo; i++)
    {
        if (i == (T))
        {
            obstaculos[i] = 1;
            contador++;
        } else if ( i == ((T) + (contador * O)) )
            {
                obstaculos[i] = 1;
                contador++;
            }
    }

    int saltos[ultimoPulo]{0};
    contador1 = 0;
    primeiroPulo = pulos[0];
    

    for (int i = (primeiroPulo); i < ultimoPulo; i++)
    {
        if (i == (primeiroPulo))
        {
            saltos[i] = 1;
            contador1++;
        } else if ( i == (pulos[contador1] - 1))
        {
            saltos[i] = 1;
            contador1++;
        }
    }
// Conclusão da questão
    bateu = 0;

    for (int i = 0; i < (ultimoPulo - 1); i++)
    {
        if (obstaculos[i] == 1 && obstaculos[i] == saltos[i - 1])
        {
            bateu = (i + 1);
            break;
        }
    }
    if (bateu == 1)
    {
        cout << bateu << endl;
    } else {
        cout << (ultimoPulo + (O+1)) << endl;
    }

    return 0;
}