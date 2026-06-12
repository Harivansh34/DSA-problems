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
        
        string s=to_string(n);
        int first=s[0]-'0';  // Converts character digits to integer , first inter value is printed
        int len=s.length();
        
        int count=((first-1)*10)+(len*(len+1))/2;
        
        cout<<count<<endl;
    }
    
    return 0;
}