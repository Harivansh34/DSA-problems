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

        int r0=0, r1=0, r2=0, r3=0;

        for(int i=0; i<n; i++)
        {
            if(i%4==0)
            {
                r0++;
            }
            if(i%4==1)
            {
                r1++;
            }
            if(i%4==2)
            {
                r2++;
            }
            if(i%4==3)
            {
                r3++;
            }

        }   

        if(r0==r3 && r1==r2)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }

    }
    return 0;
}