#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int count=0;
    
    if(n<26)
    {
        cout<<"NO";
        return 0;
    }
    
    for(char ch='a'; ch<='z'; ch++)
    {
        for(int i=0; i<n; i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
            
            if(s[i]==ch)
            {
                count++;
                break;
            }
            
        }
    }
    
    if(count==26)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
   
}

