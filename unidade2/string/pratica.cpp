#include <iostream>
#include <cstring>

using namespace std;

/*
int strlen(char string[]){
    int i;
    for (i = 0; string[i] != '\0'; i++);
    return i;
}
*/

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
}
