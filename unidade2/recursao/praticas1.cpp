#include <iostream>
#include <cmath>

using namespace std;

int potencia_recursiva(int base, int expoente)
{
    if (expoente == 0) // Caso base
    {
        return 1;
    }
    
    return base * potencia_recursiva(base, (expoente - 1));
}

int soma_array(int vetor[], int tamanho)
{
    if (tamanho == 0)
    {
        return 0;
    }

    return (vetor[tamanho - 1] + soma_array(vetor, tamanho - 1));
}

int maior_valor(int vetor[], int tamanho)
{
    if (tamanho < 2)
    {
        return vetor[0];
    }
    
    if ((vetor[tamanho - 1]) > vetor[tamanho - 2])
    {
        int aux = vetor[tamanho - 2];
        vetor[tamanho - 2] = vetor[tamanho - 1];
        vetor[tamanho - 1] = aux;
        return maior_valor(vetor, (tamanho - 1));
    }
    return maior_valor(vetor, (tamanho - 1));
}