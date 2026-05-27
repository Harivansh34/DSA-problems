#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int c;
        cin>>c;
        
        v.push_back(c);
    }
    
    int sum1=0;
    int sum2=0;
    
    int l=0;
    int r=n-1;
    
    bool sturn=true;
    
    while(l<=r)
    {
        int myturn=0;
        if(v[l]>v[r])
        {
            myturn+=v[l];
            l++;
        }
        else
        {
            myturn+=v[r];
            r--;
        }
        
        if(sturn)
        {
            sum1+=myturn;
        }
        else
        {
            sum2+=myturn;
        }
        sturn=!sturn;
    }
    
    cout<<sum1<<" "<<sum2<<endl;
    
    
   
    return 0;
}