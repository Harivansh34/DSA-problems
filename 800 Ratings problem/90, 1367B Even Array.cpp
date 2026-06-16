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
        
        int even=0;
        int odd=0;
        
        for(int i=0; i<n; i++)
        {
              if(i%2==0 && v[i]%2!=0)
            {
                even++;
            }
              if(i%2==1 && v[i]%2==0)
            {
                odd++;
            }
        }
        
        if(even==odd)
        {
            cout<<even<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    
    return 0;
}