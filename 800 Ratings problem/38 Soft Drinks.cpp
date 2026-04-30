#include<iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int drink=k*l;
    int eachpeople=(drink/nl);
    
    int slices=c*d;
    int salt=p/np;
    
    if(eachpeople<slices && eachpeople<salt)
    {
        int mina=(eachpeople)/n;
        cout<<mina;
        
    }
    else if(slices<salt)
    {
        int minb=(slices)/n;
        cout<<minb;
    }
    else
    {
        int minc=(salt)/n;
        cout<<minc;
    }
    
    
    return 0;
    
    
}
