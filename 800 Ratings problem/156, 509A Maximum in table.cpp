#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n][n];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[i][0]=1;
            arr[0][j]=1;
            
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
            
        }
    }
    
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<arr[n-1][n-1]<<endl;
    }
    
    return 0;
}