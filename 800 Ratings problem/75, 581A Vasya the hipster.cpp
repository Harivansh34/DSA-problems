#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    
    int diff=min(a,b);
    int left=max(a,b)-min(a,b);
    
    int same=left/2;
    
    cout<<diff<<" "<<same<<endl;
    
    return 0;
}
