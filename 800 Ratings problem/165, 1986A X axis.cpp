#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int> v;
        
       for(int i=0; i<3; i++)
       {
           int x;
           cin>>x;
           
           v.push_back(x);
       }   
       
       sort(v.begin(), v.end());
       
       int ans=v[2]-v[0];
       
       cout<<ans<<endl;
        
    }
    
    return 0;
}