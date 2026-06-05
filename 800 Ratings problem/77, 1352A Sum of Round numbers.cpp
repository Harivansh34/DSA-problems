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
        
        int p=1;
        while(n>0)
        {
        int digit= n%10;
        
        if(digit!=0)
        {
            v.push_back(digit*p);
        }
        
        n/=10;
        p*=10;
       
        }
        
        cout<<v.size()<<endl;
        
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
}