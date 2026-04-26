#include<iostream>
using namespace std;

int main()
{
    int k, n, w;              // 3 17 4
    cin>>k>>n>>w;
    
    int borrow=0;
    int value=0;
    
    for(int i=1; i<=w; i++)
    {
        value=value+(k*i);   // Vlaue will increase and add up
    }                        // 0+(3*1)=3       and became 30
   
    if(n<value)               // when 17<30 so borrow
    {
        borrow=value-n;        // 0=30-17   = 13= borrow
    }
    
    cout<<borrow<<endl;
    return 0;
}
