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
    
    int neg=0;
    int sum=0;
    
    vector<int> v;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        
        v.push_back(a);
        
        sum+=a;
        if(a==-1)
        {
            neg++;
        }
       
    }
    

    int moves=0;
    
        while(sum<0)
        {
            sum+=2;
            moves++;
            neg--;
        }
       if(neg%2!=0)
       {
           moves++;
       }
    
    cout<<moves<<endl;
    
    }
    
    return 0;
}