# lab-6
// question 5
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[30];
    cout<<"Enter about 30 character of string : "<<endl;
    gets(str);
    cout<<endl<<"output : "<<endl;
    for(int i=0;i<strlen(str);i++)
    {
     for(int j=i;j<strlen(str);j++)
      cout<<*(str+j);
     cout<<endl;
    }
    return 0;
}
