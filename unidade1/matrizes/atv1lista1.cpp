#include <iostream>
using namespace std;

// Soma de matrizes

/* Escreva um programa para somar duas matrizes A e B. A primeira linha da entrada de seu programa é constituída
de dois valores inteiros, correspondentes respectivamente ao número de linhas L e número de colunas C das matrizes.
As L linhas seguintes definem as linhas das matrizes A, contendo, cada uma C valores inteiros. Em seguida, haverá as
L linhas da matriz B, cada uma contendo também C valores inteiros. A saída do programa deve ser uma matriz L x C
resultante da soma de A e B.*/

int main ()
{
    int linhas, colunas;

    cin >> linhas >> colunas;

    int matrizA[linhas][colunas], matrizB[linhas][colunas], matrizResultante[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matrizResultante[i][j] = ( (matrizA[i][j]) + (matrizB[i][j]) );
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << matrizResultante[i][j] << " ";
        }
        cout << "" << endl;
    }

    return 0;
}