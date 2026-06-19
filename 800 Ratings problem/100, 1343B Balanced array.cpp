#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int sum=0;
        int add=0;
        int odd=0;
        
        if((n/2)%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
             cout<<"YES"<<endl;
            for(int i=2; i<=n; i++)
            {
                if(i%2==0)
                {
                    cout<<i<<" ";
                    sum+=i;
                }
            }
            for(int i=1; odd<(n/2-1); i+=2)
            {
                cout<<i<<" ";
                add+=i;
                odd++;
            }
            cout << sum - add << endl;
           
        }
        
    }
    
    return 0;
}