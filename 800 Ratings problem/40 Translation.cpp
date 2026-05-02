#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    string r;
    cin>>r;
    
    reverse(s.begin(), s.end());
    
    if(r==s)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    
    return 0;
}
