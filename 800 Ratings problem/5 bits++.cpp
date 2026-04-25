#include<iostream>
using namespace std;

int main()
{
    int n; // n=nubbeer of statements like x++, x--, ++x, --x.
    cin>>n;

    int x=0;

    while(n--)
    {
        string s;
        cin>>s;

        if(s[1]=='+')
        {
            x++;
        }
        else 
        x--;
    }
    cout<<x;

    return 0;
}
