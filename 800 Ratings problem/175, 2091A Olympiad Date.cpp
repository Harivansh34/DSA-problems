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
        
        int c0=0;
        int c1=0;
        int c2=0;
        int c3=0;
        int c5=0;
        int pos=0;
        int sum=0;
        
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                c0++;
                if(c0>=3)
                {
                    c0=3;
                }
            }
            if(v[i]==1)
            {
                c1++;
                if(c1>=1)
                {
                    c1=1;
                }
            }
            if(v[i]==2)
            {
                c2++;
                if(c2>=2)
                {
                    c2=2;
                }
            }
            if(v[i]==3)
            {
                c3++;
                if(c3>=1)
                {
                    c3=1;
                }
            }
            if(v[i]==5)
            {
                c5++;
                if(c5>=1)
                {
                    c5=1;
                }
            }
            
            pos=i;
            sum=c0+c1+c2+c3+c5;
            if(sum==8)
            {
                break;
            }
        }
        
        if(sum==8)
        {
            cout<<pos+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}