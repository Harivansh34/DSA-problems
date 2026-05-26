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
        bool win=true;
        
        if((n-1)%3==0 || (n+1)%3==0)
        {
            win=true;
        }
        else
        {
            win=false;
        }
        
        if(win)
        {
            cout<<"First"<<endl;
        }
  
       else
       {
           cout<<"Second"<<endl;
       }
    }
 
    return 0;
    
}