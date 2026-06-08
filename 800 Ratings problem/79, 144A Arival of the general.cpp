#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> v;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        
        v.push_back(a);
    }
    
    int count1=0;
    int count2=0;
    
    int max=v[0];
    int min=v[0];
    for(int i=0; i<n; i++)
    {
        if(v[i]<=min)
        {
            min=v[i];
            count1=i;
        }
        
        if(v[i]>max)
        {
            max=v[i];
            count2=i;
        }
    }
    
    
    int swaps= count2+(n-1-count1);
    if(count2>count1)
    {
        swaps--;
    }
   cout<<swaps<<endl;
   
   return 0;
}