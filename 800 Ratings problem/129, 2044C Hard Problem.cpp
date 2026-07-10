#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int m, a, b, c;
        cin>>m>>a>>b>>c;
        
        int r1=min(m,a);
        int r2=min(m,b);
        
        int remain1=m-r1;
        int remain2=m-r2;
        
        int empty=remain1+remain2;
        
        empty=min(empty,c);
        int seat=r1+r2+empty;
        
        cout<<seat<<endl;
        
    }
    
    return 0;
}