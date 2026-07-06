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
        
        vector<int> v;
        
        for(int i=1; i<=n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
        }
        
        int odd=0;
        int even=0;
        
        for(int i=0; i<n; i++)
        {
            if(i%2==0 && v[i]%2!=0)
            {
                odd++;
            }
            else
            {
                if(i%2==0 && v[i]%2==0)
                {
                    even++;
                }
            }
        }
        
        int odd2=0;
        int even2=0;
        
        for(int i=0; i<n; i++)
        {
            if(i%2!=0 && v[i]%2==0)
            {
                even2++;
            }
            else
            {
                if(i%2!=0 && v[i]%2!=0)
                {
                    odd2++;
                }
            }
        }
    
        if((odd==0 || even==0) && (odd2==0 || even2==0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}