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
    
    vector<int> b;
    vector<int> c;
    
    int lenb=0;
    int lenc=0;
    
    int mx=v[0];
    
    for(int i=0; i<n; i++)
    {
            if(mx==v[i])
            {
                b.push_back(v[i]);
                lenb++;
            }
            else
            {
                c.push_back(v[i]);
                lenc++;
            }
    }
    
    if(lenc==0 || lenb==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<lenb<<" "<<lenc<<endl;
        
        for(int i=0; i<lenb; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        
        for(int i=0; i<lenc; i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    
    }
    
    
    
}