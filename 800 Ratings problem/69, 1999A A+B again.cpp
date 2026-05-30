#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a;
        cin>>a; 
        
        int num1=a%10;
        int num2=a/10;
        
        int sum=num1+num2;
        cout<<sum<<endl;
    }
    
    return 0;
}