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
    
    sort(v.begin(), v.end());
    
    int add=0;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]!=v[n-1])
        {
            add=v[n-1]-v[i];
            sum+=add;
        }
    }
    
    cout<<sum<<endl;
    return 0;
} 