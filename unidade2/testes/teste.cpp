#include <iostream>
#include <string>

using namespace std;

int main () 
{
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

    for (int i = 0; i < casas; i++)
    {
        for (int j = 0; j < casas; j++)
        {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }

    string atual = "e8";
    string final = "e2";

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
    cout << linha1 << " " << coluna1 << " " << linha2 << " " << coluna2 << endl;

    int j = coluna1;

    for (int i = linha1; i < casas; i++)
    {
        if ((linha2 == (i + 1)) && (coluna2 == (j + 1))) cout << "primeiro if" << endl;
        j++;
        if (j == casas) break;
    }

    j = coluna1;

    for (int i = linha1; i < casas; i++)
    {
        if ((linha2 == (i + 1)) && (coluna2 == (j - 1))) cout << "segundo if" << endl;
        j--;
        if (j < 0) break;
    }

    j = coluna1;

    for (int i = linha1; i >= 0; i--)
    {
        if ((linha2 == (i - 1)) && (coluna2 == (j + 1))) cout << "terceiro if" << endl;
        j++;
        if (j == casas) break;
    }

    j = coluna1;

    for (int i = linha1; i >= 0; i--)
    {
        if ((linha2 == (i - 1)) && (coluna2 == (j - 1))) cout << "quarto if" << endl;
        j--;
        if (j < 0) break;
    }
    cout << "fim do código 1" << endl;

    for (int i = linha1; i < casas; i++)
    {
        if ((linha2 == (i + 1)) && (coluna2 == coluna1)) 
        {
            cout << "quinto if" << endl;
            break;
        }
    }

    for (int i = linha1; i >= 0; i--)
    {
        if ((linha2 == (i - 1)) && (coluna2 == coluna1)) 
        {
            cout << "sexto if" << endl;
            break;
        }
    }

    for (int j = coluna1; j < casas; j++)
    {
        if ((linha2 == linha1) && (coluna2 == (j + 1))) 
        {
            cout << "setimo if" << endl;
            break;
        }
    }
    
    for (int j = coluna1; j >= 0; j--)
    {
        if ((linha2 == linha1) && (coluna2 == (j - 1))) 
        {
            cout << "oitavo if" << endl;
            break;
        }
    }
    cout << "fim do código novamente" << endl;
    return 0;
}