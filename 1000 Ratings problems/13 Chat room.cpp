#include <iostream>
using namespace std ;
int main()
{
    string s;
    cin>>s;
    string target="hello";
    int n=s.length();//ahhellllloou
    int count=0;
    for(int i=0; i<n; i++)
    {
       if(s[i]==target[count])
       {
           count+=1;
       }
    }
    if(count==5)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}


