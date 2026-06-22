#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int> v;
        
       for(int i=0; i<4; i++)
       {
           int a;
           cin>>a;
           
           v.push_back(a);
       }
       
       sort(v.begin(), v.end());
       
       if(v[0]==v[3])
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    
    return 0;
}