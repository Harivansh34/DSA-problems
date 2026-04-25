#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0;
    
    while(n--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(a && b!=0 || a && c!=0 || b && c!=0 || a && b && c!=0)
        {
            count++;
        }
    }
    
    cout<<count;
    return 0;
}
