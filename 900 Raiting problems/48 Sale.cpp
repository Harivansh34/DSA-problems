#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    
    vector<int> v(n);
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        
        v.push_back(a);
    }
    
    sort(v.begin(),v.end());
    
    int sum=0;
     for(int i=0; i<m; i++)
     {
         sum+=v[i];
     }
     
     cout<<abs(sum)<<endl;
     return 0;
}