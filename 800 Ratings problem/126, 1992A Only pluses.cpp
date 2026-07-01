#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        
        int count=0;
        
        while(count<5)
        {
            int mini=min(a,min(b,c));
            
            if(mini==a)
            {
                a++;
            }
            else if(mini==b)
            {
                b++;
            }
            else
            {
                c++;
            }
            count++;
            
        }
       int mul=a*b*c;
       cout << mul << endl;
    }
}