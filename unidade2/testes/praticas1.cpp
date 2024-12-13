#include <string>
using namespace std;

int classifica_triangulos(double lado1, double lado2, double lado3)
{
    if (lado1 == lado2 && lado1 == lado3) return 0;
    if (lado1 == lado2 && ((lado1 + lado2) > lado3)) return 1;
    if (lado1 == lado3 && ((lado1 + lado3) > lado2)) return 1;
    if (lado2 == lado3 && ((lado2 + lado3) > lado1)) return 1;

    if ((lado1 + lado2) > lado3)
    {
        if ((lado1 + lado3) > lado2) 
        {
            if ((lado2 + lado3) > lado1) return 2;
        }
    }
    return 3;
}

bool xadrez(string atual, string final)
{
    // Montagem do tabuleiro

    const int casas = 8;
    string tabuleiro[casas][casas];
    string prefixo;
    for (int i = 0; i < casas; i++)
    {
        for (int j = 0; j < casas; j++)
        {
            if (j == 0) prefixo = "a";
            if (j == 1) prefixo = "b";
            if (j == 2) prefixo = "c";
            if (j == 3) prefixo = "d";
            if (j == 4) prefixo = "e";
            if (j == 5) prefixo = "f";
            if (j == 6) prefixo = "g";
            if (j == 7) prefixo = "h";
            
            tabuleiro[i][j] = prefixo + to_string(casas - i);
        }
    }
    // Lógica do teste
    int linha1 = -1, coluna1, linha2 = -1, coluna2;
    for (int i = 0; i < casas; i++)
    {
        for (int j = 0; j < casas; j++)
        {
            if (tabuleiro[i][j] == atual)
            {
                linha1 = i;
                coluna1 = j;
                break;
            }
            if (linha1 != -1) break;
        }
    }

    for (int i = 0; i < casas; i++)
    {
        for (int j = 0; j < casas; j++)
        {
            if (tabuleiro[i][j] == final)
            {
                linha2 = i;
                coluna2 = j;
                break;
            }
        }
        if (linha2 != -1) break;
    }

    int j = coluna1;

    for (int i = linha1; i < casas; i++)
    {
        if ((linha2 == (i + 1)) && (coluna2 == (j + 1))) return true;
        j++;
        if (j == casas) break;
    }

    j = coluna1;

    for (int i = linha1; i < casas; i++)
    {
        if ((linha2 == (i + 1)) && (coluna2 == (j - 1))) return true;
        j--;
        if (j < 0) break;
    }

    j = coluna1;

    for (int i = linha1; i >= 0; i--)
    {
        if ((linha2 == (i - 1)) && (coluna2 == (j + 1))) return true;
        j++;
        if (j == casas) break;
    }

    j = coluna1;

    for (int i = linha1; i >= 0; i--)
    {
        if ((linha2 == (i - 1)) && (coluna2 == (j - 1))) return true;
        j--;
        if (j < 0) break;
    }
    
    int i;

    for (i = linha1; i < casas; i++)
    {
        if ((linha2 == (i + 1)) && (coluna2 == coluna1)) return true;
    }

    for (i = linha1; i >= 0; i--)
    {
        if ((linha2 == (i - 1)) && (coluna2 == coluna1)) return true;
    }

    for (j = coluna1; j < casas; j++)
    {
        if ((linha2 == linha1) && (coluna2 == (j + 1))) return true;
    }
    
    for (j = coluna1; j >= 0; j--)
    {
        if ((linha2 == linha1) && (coluna2 == (j - 1))) return true;
    }

    return false;
}