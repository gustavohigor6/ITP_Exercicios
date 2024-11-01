#include <iostream>

using namespace std;

// Procura elemento na matriz
/* Faça um programa que, dados os números n, m (n,m <= 30), lê do usuário os valores de uma matriz A nxm. Depois, 
o programa deve ler um número x e imprimir uma mensagem indicando se a matriz possui algum elemento cujo valor é
x.*/

int main ()
{
// Declaração e entrada das variáveis globais utilizadas
    int linhas, colunas, x, validacao;

    cin >> linhas >> colunas;

    int matrizA[linhas][colunas];

// Entrada dos valores da matriz A
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> matrizA[i][j];
        }
    }

    cin >> x;

    validacao = 0;
    
// Verificação do elemento na matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matrizA[i][j] == x)
            {
                validacao++;
                cout << "Matriz tem elemento " << x << endl;
                break;
            }
        }
        
        if (validacao > 0)
        {
            break;
        }
    }

    if (validacao == 0)
    {
        cout << "Matriz não tem elemento " << x << endl;
    }

    return 0;
}