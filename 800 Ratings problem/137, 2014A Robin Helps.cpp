#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        
        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
        }
        
        int have=0;
        int give=0;
        
        for(int i=0; i<n; i++)
        {
            if(v[i]>=k)
            {
                have+=v[i];
            }
            if(have>0 && v[i]==0)
            {
                have--;
                give++;
            }
            
        }
        
        cout<<give<<endl;
    }
    return 0;
}