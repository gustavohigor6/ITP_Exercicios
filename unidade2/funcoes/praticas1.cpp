#include <iostream>
#include <string>

int maior(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    if (y > x && y > z)
    {
        return y;
    }
    return z;
}

std::string inverte(std::string str)
{
    std::string str1;
    int tamanho = (str.size() - 1);
    for (int i = 0; i <= tamanho; i++)
    {
        str1 += str[tamanho - i];
    }
    return str1;
}

int busca(int x, int tamanho, int y[])
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (x == y[i])
        {
            return i;
        }
    }
    return -1;
}
// Escreva uma função para buscar um valor inteiro em um array de inteiros, 
// retornando o índice quando encontrar, ou -1 quando não encontrar
int busca_array(int numero, int tamanho_array, int array[])
{
    for (int i = 0; i < tamanho_array; i++)
    {
        if (array[i] == numero)
        {
            return i;
        }
    }
    return -1;
}
/*
int main()
{
    /* Teste da prática 1 (maior)
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << maior(a, b, c) << std::endl;
    */

    /* Teste da prática 2 (inverte)
    std::string nome;
    std::cin >> nome;
    std::cout << inverte(nome) << std::endl;
    */

    /* Teste da prática 3 (busca)
    int a;
    std::cin >> a;
    int b = 4;
    int x[b] = {2, 4, 5, 1};
    std::cout << busca(a, b, x) << std::endl;
    */

//    return 0;
// }
