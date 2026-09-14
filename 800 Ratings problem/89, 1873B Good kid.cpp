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
        
        sort(v.begin(), v.end());
        
         for(int i=0; i<n; i++)
         {
             v[0]=v[0]+1;
             break;
         }
         
         int mul=1;
         for(int i=0; i<n; i++)
         {
             mul*=(v[i]);
         }
         
         cout<<mul<<endl;
        
    }
    
    return 0;
}