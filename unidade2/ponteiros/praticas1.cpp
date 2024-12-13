#include <iostream>
 
using namespace std;

//Implemente uma função para alocar um array de inteiros dinâmicamente, definindo todos os espaços
// com um dado valor.

int* aloca_matriz(int tamanho, int valor)
{
    int *vetor = new int[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = valor;
    }

    return vetor;
}

//Implemente uma função que soma dois vetores (sequẽncia de inteiros). A função deve retornar 
// uma nova sequência alocada dinâmicamente.

int* soma_arrays(int tamanho, int a[], int b[])
{
    int *vetorSoma = new int[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        vetorSoma[i] = (a[i] + b[i]);
    }

    return vetorSoma;
}

//Implemente uma função para criar uma matriz identidade cujo tamanho é passado por parâmetro. A função
// deve retornar a matriz criada dinamicamente

int** matriz_identidade(int &linhas, int &colunas)
{
    int** matriz = new int*[linhas];
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = new int[colunas];
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i == j) matriz[i][j] = 1;
            if (i != j) matriz[i][j] = 0;
        }
    }
    return matriz;
}

void desaloca_matriz(int **matriz, int lin)
{
    for (int i = 0; i < lin; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main () 
{
/*
    // Testando a prática 1: aloca array;
    int t = 4, v = 10;
    int* ponteiro = aloca_matriz(t, v);
    
    for (int i = 0; i < t; i++)
    {
        cout << ponteiro[i] << endl;
    }
    delete[] ponteiro;
*/
/*
    // Testando a prática 2: soma de arrays;
    int t2 = 5;
    int v1[t2] = {2, 4, 6, 8, 10};
    int v2[t2] = {1, 3, 5, 7, 9};

    int* soma = soma_arrays(t2, v1, v2);

    for (int i = 0; i < t2; i++)
    {
        cout << soma[i] << endl;
    }

    delete[] soma;
*/
    int lin = 3, col = 3;
    int** matriz = matriz_identidade(lin, col);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    desaloca_matriz(matriz, 3);

    return 0;
}