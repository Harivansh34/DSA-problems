#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;
    
    vector<int> s(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]<=h)
        {
            sum=sum+1;
        }
        else
            sum=sum+2;
            
    }
    
    cout<<sum;
    return 0;
}
