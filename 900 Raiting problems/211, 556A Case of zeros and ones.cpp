#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;

    string st;
    
    for(int i=0; i<n; i++)
        {
            if(!st.empty() && st.back()!=s[i])
            {
                st.pop_back();
            }
            else
            {
                st.push_back(s[i]);
            }
        }

    cout<<st.length()<<endl;

    return 0;
}