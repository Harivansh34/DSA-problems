#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    int count=0;
    int store=0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i]>0)
        {
            store+=v[i];
        }
        else
        {
            if(store>0)
            {
                store--;
            }
            else
            {
                count++;
            }
        }
    }

    cout<<count<<endl;
    
    return 0;
}