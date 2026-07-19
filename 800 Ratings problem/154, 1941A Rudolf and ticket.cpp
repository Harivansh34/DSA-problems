#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    
    while(t--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        
        vector<int> v1;
        vector<int> v2;
    
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v1.push_back(a);
        }
        
        for(int i=0; i<m; i++)
        {
            int b;
            cin>>b;
            
            v2.push_back(b);
        }
        
        int sum=0;
        int count=0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(v1[i]<k && v2[j]<k)
                {
                    sum=v1[i]+v2[j];
                    if(sum<=k)
                    {
                        count++;
                    }
                }
            }
        }
        
        cout<<count<<endl;
    }
}