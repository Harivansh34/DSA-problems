#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> v;
    
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x ;
        v.push_back(x);
    }
    
    bool found=false;
    
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
         found=true;
        }
        
    }
    if(found)
    {
        cout<<"Hard";
    }
    else
    cout<<"Easy";
    
    
    return 0;
}
