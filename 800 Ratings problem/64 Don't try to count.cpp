#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
    int n, m;
    cin>>n>>m;
    
    string x;
    cin>>x;
    
    string s;
    cin>>s;
    
    bool found=false;
    
    int count=0;
  
        for(int i=0; i<=6; i++)
        {
            if(x.find(s)!=-1)
            {
                found=true;
                break;
            }
                x=x+x;
                count++;
        }

    
    if(found)
    {
        cout<<count<<endl;
    }
    else
    {
         cout<<"-1"<<endl;
    }
    }
    
    return 0;
   
}