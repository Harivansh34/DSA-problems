#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n1;
    int n2;
    
    string s1;
    string s2;
    
    
    
    cin>>s1>>s2;
    n1=s1.size();
    n2=s2.size();
    
    for(int i=0; i<n1; i++)
    {
        s1[i]=tolower(s1[i]);
    }
    for(int i=0; i<n2; i++)
    {
        s2[i]=tolower(s2[i]);
    }

        if(s1>s2)
        cout<<1;
        else if(s1<s2)
        cout<<-1;
        else if (s1 == s2)
        cout<< 0;

    return 0;


}
