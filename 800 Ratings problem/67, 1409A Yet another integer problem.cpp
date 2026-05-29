#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        
        int difference=abs(a-b);
        
        int moves=0;
        
        if(difference==0)
        {
            cout<<difference<<endl;
        }
       else
       {
           moves=(difference+9)/10;
           cout<<moves<<endl;
       }
        
    }
    
    return 0;
}