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
        int op=0;
        
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
            
            op=op^v[i];
            
        }
        
        if(n%2==0)
        {
            if(op==0)
            {
                cout<<op<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<op<<endl;
        }
    }
    
    return 0;
}