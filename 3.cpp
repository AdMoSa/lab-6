 # lab-6
 #include <iostream>
using namespace std;
int main()
{
    int ar[10];
    cout<<"Enter element of array : "<<endl;
    for(int i=0;i<10;i++)
     cin>>ar[i];
    cout<<endl<<"Normal index method : "<<endl;
    for(int j=0;j<10;j++)
     cout<<ar[j]<<endl;
    cout<<endl<<"Pointer method : "<<endl;
    for(int k=0;k<10;k++)
     cout<<*(ar+k)<<endl;
    return 0;
}
