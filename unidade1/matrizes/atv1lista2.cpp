#include <iostream> 

using namespace std;

// Batalha naval - Tiro 1

/* Batalha naval é um jogo clássico de papel e caneta em que os jogadores devem posicionar seus navios em uma grid
(malha) escondida dos demais jogadores e depois, a cada turno, eles escolhem uma posição da grid do adversário
para atirar. Vence quem afundar todos os navios do adversário. 
Na sua versão do jogo, os navios são sempre retos, dispostos obrigatoriamente na horizontal ou na vertical, e 
podem ocupar de 1 a 5 casas da grid. É importante ressaltar que eles não podem "se tocar", ou seja, sempre há pelo
menos um espaço de "água" entre os navios. Eles podem, entretanto, se encontrar nas "bordas" da grid

Um navio é afundado quando todas as casas que ele ocupa forem atingidas por tiros. Assim, a cada tiro, há 3
possibilidades de resultado: 
1 - Errou (foi na água)
2 - Acertou em uma parte do navio, mas ainda não o afundou completamente.
3 - Acertou em uma parte de um navio, afundando-o completamente

Escreva um programa para verificar o resultado de um tiro em um grid. A primeira linha de entrada de dados possui
dois valores A e L, correspondentes à altura (A) e largura (L) da grid. Em seguida, haverá A linhas, cada uma 
contendo L valores, definindo o conteúdo das células da grid, cujos valores são 0(água) e 1(parte do navio). Por 
fim, a última linha possui dois valores inteiros correspondentes respectivamente à linha e à coluna do tiro. Os 
valores da linha e coluna começam de 1. 

A saída do programa deverá ser: 
1 se o tiro acertou a "água", 2 se acertou em uma parte do navio, mas ainda não afundou completamente, ou 3 se 
acertou em uma parte do navio, afundando-o completamente.

*/

int main ()
{
// Declaração/entrada das variáveis globais utilizadas
    int n, m, nTiro, mTiro, auxL, auxC;
    auxL = 0; 
    auxC = 0;
    
    cin >> n >> m;

    int grid[n][m];

// Entrada de dados da matriz e do disparo
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    
    cin >> nTiro >> mTiro;
    nTiro--;
    mTiro--;
    
// Validação do acerto do tiro
    if (grid[nTiro][mTiro] == 0)
    {
        cout << 1 << endl;
    } else {
        for (int i = (nTiro - 1); i <= (nTiro + 1); i++)
        {
            if (grid[i][mTiro] == 1)
            {
                auxL++;
            }
        }
        for (int i = (mTiro - 1); i <= (mTiro + 1); i++)
        {
            if (grid[nTiro][i] == 1)
            {
                auxC++;
            }
        }
    }

    if (auxL == 1 && auxC == 1)
    {
        cout << 3 << endl;
    } else if (auxL != 0 && auxC != 0) {
        cout << 2 << endl;
    }

    return 0;
}