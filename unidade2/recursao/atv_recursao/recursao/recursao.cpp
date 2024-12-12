#include <string>

using namespace std;

int soma_positivos(int n)
{
    if (n <= 0)
    { // Caso base
        return 0;
    }
    return (n + soma_positivos(n - 1)); // Caso recursivo
}

int soma_inteiros(int n)
{
    if (n == 0)
    { // Caso base
        return 0;
    }
    else if (n < 0)
    { // Caso recursivo
        return (n + soma_inteiros(n + 1));
    }
    else
    {
        return (n + soma_inteiros(n - 1));
    }
}

bool palindromo(string a)
{
    int i = a.size();

    if (i <= 1) // Caso base: Quando a string for vazia ou composta por apenas 1 elemento, logo será um palindromo
    {
        return true;
    }

    if (a[0] == a[i - 1])
    {
        return palindromo(a.substr(1, i - 2)); // Utilizando a substring com o objetivo de chamar recursivamente ...
        // os índices corretos para a próxima pilha
    }
    else
    {
        return false;
    }
}

int fatorial_duplo(int n)
{
    int resto = (n % 2);

    if (n == 0 || n == 1)
    { // Caso base
        return 1;
    }
    if (resto == 0)
    {
        return (n * fatorial_duplo(n - 2)); // Caso recursivo
    }
    else
        return (n * fatorial_duplo(n - 2)); // Caso recursivo
}

// A sequência de Padovan P é uma sequência de naturais definida pelos valores iniciais
// P(0) = P(1) = P(2) = 1 e P(n) = P(n-2) + P(n-3) se n > 2.

int padovan(int n)
{
    if (n == 0 || n == 1 || n == 2)
    { // Caso base
        return 1;
    }
    else
    {
        return (padovan(n - 2) + padovan(n - 3)); // Caso recursivo
    }
}