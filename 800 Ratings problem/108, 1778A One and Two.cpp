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
         int count=0;
         
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            
            v.push_back(a);
            
            if(v[i]==2)
            {
                count++;
            }
        }
        
        if(count%2!=0)
        {
            cout<<-1<<endl;
        }
        else if(count==0)
        {
            cout<<1<<endl;
        }
        else
        {
            int count1=0;
            int num=count/2;
            
            for(int i=0; i<n; i++). // Important
            {
                if(v[i]==2)
                {
                    count1++;
                }
                
                if(count1==num)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}