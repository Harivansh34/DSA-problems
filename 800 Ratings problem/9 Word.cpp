#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int n=s.length();

    int lower=0; // Make variables to count number of lowercase and uppercase
    int upper=0;

    for(int i=0; i<n; i++)
    {
        if(islower(s[i]))
        {
            lower++;
        }
        else if(isupper(s[i]))
        {
            upper++;
        }
    }

    if(lower>upper)   
    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
    }

    else if(lower<upper)
    {
        for(int i=0; i<n; i++)
        {
            s[i]=toupper(s[i]);
        }
    }

    else if(lower==upper)
    {
        for(int i=0; i<n; i++)
        {
            s[i]=tolower(s[i]);
        }
    }

    cout<<s<<endl;

    return 0;
}