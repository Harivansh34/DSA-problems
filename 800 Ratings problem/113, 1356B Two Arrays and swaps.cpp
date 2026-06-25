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
        
        vector<int> a;
        vector<int> b;
        
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            
            a.push_back(x);
        }
        
        for(int i=0; i<n; i++)
        {
           int y;
           cin>>y;
            
           b.push_back(y);
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i=0;
        int j=n-1;
        
       while(i<n && j>=0)
       {
           if(k==0)
           {
               break;
           }
               if(a[i]<b[j])
           {
               swap(a[i],b[j]);
               k--;
           }
           i++;
           j--;
       }
       int sum=0;
       for(int i=0; i<n; i++)
       {
           sum+=a[i];
       }
        cout<<sum<<endl;
    }
    
    return 0;
}