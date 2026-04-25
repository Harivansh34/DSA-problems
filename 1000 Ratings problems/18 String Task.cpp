#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n=s.length();
    
    string space="";
    
    for(int i=0; i<n; i++)
    {
        if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
        
    }
    
    for(int i=0; i<n; i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y') // Always check !=  &&
        {
            space=space+s[i];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        
        if(i<space.length())
        {
            cout<<"."<<space[i];
        }
       
    }
    
    return 0;
}

