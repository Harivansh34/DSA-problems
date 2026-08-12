#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
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

        sort(v.begin(), v.end());
        int ol=n;

        for(int i=0; i<n-1; i++)
        {
            if(v[i]==v[i+1])
            {
                ol--;
            }
        }

        
        if((n-ol)%2==0)
        {
            cout<<ol<<endl;
        }
        else 
        {
            cout<<ol-1<<endl;
        }
        
    }

    return 0;
}