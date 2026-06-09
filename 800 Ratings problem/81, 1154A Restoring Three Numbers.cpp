#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    
    for(int i=0; i<1; i++)
    {
        int p, q, r, s;
        cin>>p>>q>>r>>s;
        
        v.push_back(p);
        v.push_back(q);
        v.push_back(r);
        v.push_back(s);
    }
    sort(v.begin(), v.end());             // taken a+b+c as largest number and made refrences; like a+b=3 a+b+c=6 a+c=5 b+c=4.
    
    int a=0;
    int b=0;
    int c=0;
    
    c=v[3]-v[2];
     a=v[1]-c;
     b=c+v[2]-v[1];
     
    
    cout<<a<<" "<<b<<" "<<c<<endl;
    
    return 0;
}