#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    
    for(int i=0; i<1; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
    }
    
    sort(v.begin(), v.end());
    int dist=v[2]-v[0];
     
     cout<<dist<<endl;
     
     return 0;
}