#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> one, two, three;
    
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        
        if(t==1)
        {
            one.push_back(i+1);
        }
        else if(t==2)
        {
            two.push_back(i+1);
        }
        
        else if(t==3)
        {
            three.push_back(i+1);
        }
        
    }
    
    int teams=min(one.size(), min(two.size(), three.size()));
    cout<<teams<<endl;
    
    for(int i=0; i<teams; i++)
    {
            cout<<one[i]<<" "<<two[i]<<" "<<three[i]<< endl;
    }
}