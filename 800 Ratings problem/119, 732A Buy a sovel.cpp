#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin>>k>>r;
    
    int sub=k-r;
    int digit=k%10;
    int last=0;
    int original=k;
    
    if(sub%10==0 || digit==r || digit==0)
    {
        cout<<1<<endl;
    }
    else 
    {
        
        for(int i=2; i<=10; i++)
        {
            int current= original*i;
            last=current%10;
            
            if(last==r || last==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    
    return 0;

}