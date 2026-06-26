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
    int len=1;
    int maxlen=1;
    
    for(int i=1; i<n; i++)
    {
        if(v[i]>v[i-1])
        {
            len++;
        }
        else
        {
            len=1;
        }
         maxlen= max(maxlen, len);
    }
    
    cout<<maxlen<<endl;
    
    return 0;
}