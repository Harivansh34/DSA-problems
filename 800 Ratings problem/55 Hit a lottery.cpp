#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int x = n;
    int count=0;
    for(int i = 0 ; i < x ;i++)
    {
    if(n/100>0)
    {
        n=n-100;
        count++;
    }
    else if(n/20>0)
    {
        n=n-20;
        count++;
    }
    else if(n/10>0)
    {
        n=n-10;
        count++;
    }
    else if(n/5>0)
    {
        n=n-5;
        count++;
    }
    else if(n/1>0)
    {
        n=n-1;
        count++;
    }
    else if (n==0){
        break;
    }
    }
    
    cout<<count;

    
}