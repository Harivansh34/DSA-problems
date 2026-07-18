#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> v;
    vector<int> x;
    
    for(int i=0; i<n; i++)
    {
        int h, a;
        cin>>h>>a;
        
        v.push_back(h);
        x.push_back(a);
    }
    
    
    
    int count=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        if(v[i]==x[j])
        {
            count++;
        }
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}