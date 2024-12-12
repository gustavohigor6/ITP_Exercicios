#include <cmath>

//Escreva uma função que recebe dois parâmetros, um float B e outro inteiro não negativo P,
//e retorna a potência B^P.

float power(float b, unsigned int p)
{
    float aux = b;
    for (int i = 0; i < p; i++)
    {
        if (i == 0)
        {
            b *= 1;
        } else {
        b *= aux;
        }
    }
    return b;
}

//Escreva uma função que recebe um vetor de inteiros e o número de elementos dele, devendo 
//retornar o maior valor do vetor;

int max(int vetor[], int tamanho)
{
    int aux = vetor[0];
    for (int i = 0; i < tamanho - 1; i++)
    {
        if (vetor[i] >= vetor[i + 1])
        {
            aux = vetor[i];
        } else {
            aux = vetor[i + 1];
        }
    }
    return aux;
}

//Escreva uma função que calcula a distância entre dois pontos 2D.

float distancia(float a1, float a2, float b1, float b2)
{
    float distancia_AB;
    distancia_AB = sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2));
    return distancia_AB;
}

//Dado dois vetores contendo pontos em X e pontos em Y, retorne a menor distância para cada ponto.

float minDist(int num, float x[], float y[])
{
    float resultante[num/2];
    int j = 0;
    for (int i = 1; i < num; i = i+2)
    {
        resultante[j] = sqrt(pow(x[i] - x[i-1], 2) + pow(y[i] - y[i-1], 2));
        j++;
    }
    float menor_num = resultante[0];
    for (int i = 0; i < num/2; i++)
    {
        if (resultante[i+1] < resultante[i])
        {
            menor_num = resultante[i+1];
        }
    }

    return menor_num;
}