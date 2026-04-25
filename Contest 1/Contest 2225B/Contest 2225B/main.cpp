#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    
    
    while(t--)
    {
        string s;
        cin>>s;
        
        
        
        string part;
        int n=s.length();
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                string part= s.substr(i, j-i+1);
            }
        }
        for(int i=0; i<part.length(); i++)
        {
            if(part[i]=='a')
            {
                part[i]='b';
            }
            else if(part[i]=='b')
            {
                part[i]='a';
            }
        }
        
        reverse(part.begin(), part.end());
        
        cout<<part<<endl;
        s.replace(i, j-i+1j, part);
        
        bool found=false;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                found=true;
                break;
            }
            
        }
        
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        
    }
    
    
   
    return 0;
}
