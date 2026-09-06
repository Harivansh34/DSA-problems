#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        int m=n;
        double r=n%10;
        double add=r/10;
        
        n/=10;
        m/=100;
        int am=(m+add)*10;

        if(n>am)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<am<<endl;
        }
        
    }
    return 0;
}