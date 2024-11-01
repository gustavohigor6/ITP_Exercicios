#include <iostream>

using namespace std;

// Matriz de permutação (0/1)

/* Uma matriz quadrada é chamada matriz de permutação se seus elementros são apenas 0 e 1 e se em cada linha e 
coluna da matriz existe um único valor 1. Escreva um programa que verifica se uma dada matriz quadrada é de 
permutação ou não.
A primeira linha da entrada deve ser um único valor inteiro N com o tamanho da matriz quadrada. Em seguida, as
N linhas seguintes conterão N valores inteiros, correspondentes aos valores da matriz. Seu programa deve enviar 
para a saída padrão 0, se a matriz não for matriz de permutação, ou 1, se for. 
Obs: N será sempre menor ou igual a 20. */

int main ()
{
    int n, contador0, contador1, permutacao;

    cin >> n;

    int matrizA[n][n];

// Entrada de dados da matriz
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrizA[i][j];
        }
    }

// Verificando os dados da matriz recebida
    permutacao = 1;

// Regra percorrendo as linhas
    for (int i = 0; i < n; i++)
    {
        contador1 = 0;
        contador0 = 0;

        for (int j = 0; j < n; j++)
        {
            if (matrizA[i][j] == 0 || matrizA[i][j] == 1)
            {
                if (matrizA[i][j] == 1)
                {
                    contador1++;
                } else {
                    contador0++;
                }
            } else {
                permutacao = 0;
                break;
            }
        }
        if ( (contador1 > 1) || (contador0 == n) )
        {
            permutacao = 0;
            break;
        }
    }

// Regra percorrendo as colunas
    for (int i = 0; i < n; i++)
    {
        contador1 = 0;
        contador0 = 0;

        for (int j = 0; j < n; j++)
        {
            if (matrizA[j][i] == 0 || matrizA[j][i] == 1)
            {
                if (matrizA[j][i] == 1)
                {
                    contador1++;
                } else {
                    contador0++;
                }
            } else {
                permutacao = 0;
                break;
            }
        }
        if ( (contador1 > 1) || (contador0 == n) )
        {
            permutacao = 0;
            break;
        }
    }

    if (permutacao == 1)
    {
        cout << permutacao << endl;
    } else {
        cout << permutacao << endl;
    }
    
    return 0;
}