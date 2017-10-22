# lab-6
// question 6
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[30];
    cout<<"Enter maximum 30 character of string : "<<endl;
    gets(str);
    cout<<endl<<"output : "<<endl;
    for(int i=strlen(str);i>=0;i--)
    {
     for(int j=i;j<strlen(str);j++)
      cout<<*(str+j);
     cout<<endl;
    }
    return 0;
}
