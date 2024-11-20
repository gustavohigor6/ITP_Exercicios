#include <iostream>
#include <cstring>

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

char busca(char string1[], char string2[])
{
    char resultado[100];
    int k = 0;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        for (int j = 0; string2[j] != '\0'; j++)
        {
            if (string1[i] == string2[j])
            {
                resultado[k] = string[i];
                k++;
                break;
            }           
        }
    }
    return resultado;
}

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
