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
        
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
        }
        
        int same=0;
        
        for(int i=0; i<2; i++)
        {
            if(v[0]==v[1])
            {
               same=v[0];
            }
            else if(v[0]==v[2])
            {
                same=v[0];
            }
            else
            {
                same=v[1];
            }
        }
        
        set<int> s;
        int index=0;
        
        for(int i=0; i<n; i++)
        {
            s.insert(v[i]);
            if(v[i]!=same)
            {
                index=i;
            }
        }
        cout<<index+1<<endl;
    }
    return 0;
}