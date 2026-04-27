#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    int n, k;
    
    
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        int sorted[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            
            sorted[i]=arr[i];
           
        }
        
        sort(arr, arr+n);
        
        bool same=true;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=sorted[i])
            {
                same=false;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(k>=2 ||  same)
            {
                cout<<"YES"<<endl;
                break;
               
            }
            else if(k==1)
            {
                cout<<"NO"<<endl;
                break;
            }
            
        }
        
        
    }
    
}

