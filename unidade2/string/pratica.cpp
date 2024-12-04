#include <iostream>
#include <string>

using namespace std;


int strlen(char string[]){
    int i;
    for (i = 0; string[i] != '\0'; i++);
    return i;
}

void upper(string &std)
{
    for (int i = 0; std[i] != '\0'; i++)
    {
        if (std[i] >= 97 && std[i] <= 122)
        {
            std[i] = std[i] - 32;
        }
    }
}

string busca(string str1, string str2)
{
    string resultado;
    
    int k = 0;
    int tamanhoStr1 = str1.size();
    int tamanhoStr2 = str2.size();
    int x;
    
    for (int i = 0; i < tamanhoStr2; i++)
    {
        for (int j = 0; j < tamanhoStr1; j++)
        {
            if (k != 0){
                x = j;
            }
            if (str2[i] == str1[j])
            {
                resultado[k] = str2[i];
                cout << resultado << endl;
                k++;
                x = j;
                break;
            }           
        }
    }
    return resultado;
}

int main(){
    string s1 = "pessoal!";
    string s2 = "pes";
    cout << busca(s1, s2) << endl;

    return 0;
}
// Entender o motivo do retorno ser a letra c.


/*
int main()
{
    string name1, name2;
    // string name1, name2;

    cin >> name1 >> name2;
    // cin >> str;

    upper(name1);

    // cout << strstr(name1, name2) << endl;
    //  cout << strlen(str) << endl;

    cout << name1 << endl;
    
    return 0;
}*/
