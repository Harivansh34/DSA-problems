#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    
    long long f;
    
    if(n%2==0)
    {
       f=n/2; 
       cout<<f;
       return 0;
    }
    
    else
    {
        f=(-n-1)/2;
        cout<<f;
    }
    return 0;
}