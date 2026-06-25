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
        
        int sum=0;
        int count1=0;
        int count2=0;
        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
            sum+=v[i];
        }
       
            for(int i=0; i<n; i++)
            {
                if(v[i]==1)
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }
        
        int total=count1+count2*2;   // important logic
        
        if(total%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else if(count1==0 && count2%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}