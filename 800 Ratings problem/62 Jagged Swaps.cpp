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
        
        if(n<=2)
        {
            cout<<"NO"<<endl;
        }
        
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
        }
        
        
        for(int i=0; i<n; i++)
        {
            if(v[0]==1)
            {
               cout<<"YES"<<endl;
               break;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    
    }
}