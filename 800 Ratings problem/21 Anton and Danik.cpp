#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int count=0;
    int count2=0;
    
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            count++;
        }
        else if(s[i]=='D')
        {
            count2++;
        }
    }
    
    if(count==count2)
    {
        cout<<"Friendship";
    }
    
   else if(count>count2)
    {
        cout<<"Anton";
    }
    else
        cout<<"Danik";
}
