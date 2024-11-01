#include <iostream>

using namespace std;

// Maior elemento de uma Linha/Coluna

/* Faça um programa que, dados os números n, m (n, m <= 30), lê do usuário os valores de uma matriz A nxm. Depois, 
o usuário vai digitar um caractere "ch" e um inteiro x. Caso "ch" seja igual 'l', o seu programa deve imprimir
o maior elemento na linha x de A. Caso "ch" seja igual a 'c', o seu programa deve imprimir o maior elemento na 
coluna x de A.*/

int main ()
{
// Declaração/entrada das variáveis globais utilizadas.
    int linhas, colunas, x, maiorL, maiorC;
    char ch;
    
    cin >> linhas >> colunas;

    int matrizA[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> matrizA[i][j];
        }
    }

    cin >> ch;
    cin >> x;

    maiorL = matrizA[x][0];
    maiorC = matrizA[0][x];

    if (ch == 'l')
    {
        for (int i = 1; i < colunas; i++)
        {
            if (matrizA[x][i] > matrizA[x][i-1])
            {
                maiorL = matrizA[x][i];
            }
        }
        cout << maiorL << endl;
    } else if (ch == 'c')
    {
        for (int i = 1; i < linhas; i++)
        {
            if (matrizA[i][x] > matrizA[i-1][x])
            {
                maiorC = matrizA[i][x];
            }
        }
        cout << maiorC << endl;
    }

    return 0;
}