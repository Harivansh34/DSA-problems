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
        int c=0;
        
           for(int i=0; i<n; i++)
        {
            if(n%2==0)
            {
               c=n/2;
            }
            else
            {
                c=n/3;
            }
        }
        int sum1=0;
        int sum2=0;
        vector<int> v;
        for(int i=0; i<c; i++)
        {
            int a1;
            cin>>a1;
            
            v.push_back(a1);
            sum1+=v[i];
        }
        
         for(int i=c; i<n; i++)
        {
            int a2;
            cin>>a2;
            
            v.push_back(a2);
            sum2+=v[i];
        }
        
        if((sum1%2==0 && sum2%2==0) || (sum1%2!=0 && sum2%2!=0))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}