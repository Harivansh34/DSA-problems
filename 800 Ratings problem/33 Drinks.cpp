#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    double sum=0;
    
    long double vf;
    int p[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    
    for(int i=0; i<n; i++)
    {
        sum=sum+p[i];
        vf=sum/n;
    }
    
    cout<<vf;
    return 0;
}
