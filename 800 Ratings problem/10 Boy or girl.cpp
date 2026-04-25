#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int n=s.length();
    
    int count=0;
    sort(s.begin(), s.end());

    for(int i=0; i<n; i++)
    {
        if(s[i]!=s[i+1])
        {

            count++;
        }
    }
    
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;

}
