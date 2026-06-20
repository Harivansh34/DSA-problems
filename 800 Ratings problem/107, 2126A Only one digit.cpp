#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int x;
        cin>>x;
        
        string s= to_string(x);
        
        int num=9;
        
        for(int i=0; i<s.length(); i++)
        {
            int digit=s[i]-'0'; // Important line when integer converted to string it became so for taking each digit of number as integer we do s[i]-'0' 
            
            if(digit<num)
            {
                num=digit;
            }
        }
        
        cout<<num<<endl;
    }
    
    return 0;
}