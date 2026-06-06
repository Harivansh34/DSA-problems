#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin>>a>>b;
    
    long long n=min(a,b);
    
    long long fact=1;
    
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }

  cout<<fact<<endl;

  return 0;
}