# lab-6
// question 4
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter your name : "<<endl;
     cin.getline(name,20);
    cout<<endl<<"Normal index method : "<<endl;
    for(int j=0;j<strlen(name);j++)
     cout<<name[j]<<endl;
    cout<<endl<<"Pointer method : "<<endl;
    for(int k=0;k<strlen(name);k++)
     cout<<*(name+k)<<endl;
    return 0;
}
