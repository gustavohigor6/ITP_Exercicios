#include <iostream>

using namespace std;

// Matriz Simétrica
/* Insira uma matriz de tamanho qualquer e verifique se a mesma é simétrica. A simetria da matriz é quando sua 
transposta é igual a ela mesma.
Entre com o número de linhas e colunas da matriz, e entre com  matriz e verifique a simetria. */

int main ()
{
    int linhas, colunas, validacao;

    cin >> linhas >> colunas;

    if (linhas != colunas)
    {
        cout << "Matriz não simétrica" << endl;
    } else {
        int matrizA[linhas][colunas];

        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                cin >> matrizA[i][j];
            }
        }
        validacao = 0;

        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if (matrizA[i][j] != matrizA[j][i])
                {
                    validacao++;
                    break;
                }
            }
        }
    }

    if (validacao > 0)
    {
        cout << "Matriz não Simétrica" << endl;
    } else {
        cout << "Matriz Simétrica" << endl;
    }

    return 0;
}