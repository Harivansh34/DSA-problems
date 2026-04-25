#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n=s.length();
    
    int count=1;         // count 1 because comparision are less than count so last count will not be counted but in comprision we can find if next is less or greater means it was equal to previous
    
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])   //logic  think from comparing next with previous
        {
            count++;
            
            if(count>=7)
            {
                cout<<"YES";
                return 0;
            }
        }
        else
            count=1;
        
    }
    cout<<"NO";
    return 0;
}

// 00100110111111101 == 1111111 there are 7 one but it will count only 6 so starting count==1;
