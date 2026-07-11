#include<bits/stdc++.h>
using namespace std;

int main()
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
    
    int count=0;
    int mn=v[0];
    int mx=v[0];
    
    for(int i=1; i<n; i++)
    {
        if(v[i]<mn)
        {
            count++;
            mn=v[i];
        }
        else if(v[i]>mx)
        {
            count++;
            mx=v[i];
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}