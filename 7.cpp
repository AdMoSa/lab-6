# lab-6
// question 7
#include <iostream>
#include<string.h>
using namespace std;
int length(char*x1)
{
  char le;int de=0,i=0;
  for(i =0; *(x1+i)!='\0';i++)
  {
    de++;
  }
  return de;
}



char *copy(char *x1,char *x2)
{
   x2=x1; 
/*int a=length(x1);
  cout<<a;
  for(int i=0;i<a;i++)
  *(x2+i)=*(*x1+i);*/
  return x2;
}
int main()
{
    char str1[10]="hello";
    char str2[10]=" Akash";
    char str3[10];
    char *a1;
    a1=str1;
    char *a2=str2;
    char *a3;
    cout<<"length of the string : "<< length(a1);
    char *d=copy(a1,a3);
    cout<<*d;
  
    /* strcpy(*a3,*a2);
    cout<<"*a3 becomes : "<<*a3<<endl;
    strcat(str1,str2);
    cout<<"when using strcat(str1,str2) : "<<str1<<endl;
    cout<<"Using strlen(str1) : "<<strlen(str1);
    cout<<endl<<"Using strcmp(str3,str2) : "<<strcmp(str3,str2);
    cout<<endl<<"Using strchr(str1,'l') : "<<strchr(str1,'l');
    cout<<endl<<"Using strstr(str1,str2) : "<<strstr(str1,str2);*/

    return 0;
}
