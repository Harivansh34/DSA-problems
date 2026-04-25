#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    
    string digits="";
    
    for(int i=0; i<n; i++)
    {
        if(s[i]!='+')
        {
            digits+=s[i];    //digits= 321
        }
    }
    
    sort(digits.begin(), digits.end());   // digits =123
    
    for(int i=0; i<digits.length(); i++)
    {
        cout<<digits[i];
    
        if(i!=digits.length()-1)
            cout<<"+";
        
        
    }
    
    
    
    
    
    return 0;
}
