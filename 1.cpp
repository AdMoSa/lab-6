# lab-6
// question 1
#include <iostream>

using namespace std;

int main()
{
    int a;int *i;
    char b;char *j;
    float c;float *k;
    bool d;bool *l;
    double e;double *m;
    cout<<"The size of normal integer variable : "<<sizeof(a);
    cout<<endl<<"The size of pointer integer variable : "<<sizeof(i);
    cout<<endl<<"The size of normal char variable : "<<sizeof(b);
    cout<<endl<<"The size of pointer char variable : "<<sizeof(j);
    cout<<endl<<"The size of normal float variable : "<<sizeof(c);
    cout<<endl<<"The size of pointer float variable : "<<sizeof(k);
    cout<<endl<<"The size of normal bool variable : "<<sizeof(d);
    cout<<endl<<"The size of pointer bool variable : "<<sizeof(l);
    cout<<endl<<"The size of normal double variable : "<<sizeof(e);
    cout<<endl<<"The size of pointer double variable : "<<sizeof(m);
    return 0;
}
