#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char str1[50], str2[50];
    int x;
    cout << "Enter First String";
    cin >> str1;
    x = strlen(str1) - 1;
    int y = 0;
    while (x >= 0)
    {

        str2[y] = str1[x];
        x--;
        y++;
    }
    str2[y] = '\0';
    cout << str2;
}