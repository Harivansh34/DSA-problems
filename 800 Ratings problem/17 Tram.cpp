#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    int p=0;
    int a, b;
    int max=0;
   
        while(n--)
        {
            
            cin>>a>>b;
            p=p-a+b;
              
            if(p>max)
            {
                max=p;
            }
        }
    cout<<max;
    return 0;
    
}
