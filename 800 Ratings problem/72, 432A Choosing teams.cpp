#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    
    vector<int> v;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    
    int count=0;
    
    for(int i=0; i<n; i++)
    {
        if(v[i]+k<=5)
        {
            count++;
        }
    }
    cout<<count/3<<endl;
    
    return 0;
}