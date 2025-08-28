#include<iostream>
using namespace std;
void use_strcpy(char*,char*);
int main(){
    char str1[20];
    char str2[20];
    cout<<"Enter  strings  :\n";
    cin>>str1>>str2;
    use_strcpy(str2,str1);
    cout<<" Concat string is :\n"<<str2;


}
void use_strcpy(char* s2, char* s1)
{
    while (*s2 != '\0')
    {
        *s2++;
    }
    while (*s1 != '\0')
    {
        *s2 = *s1;
        s1++;
        s2++;

    }
    *s1='\0';
}