#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int> a;
        vector<int> b;
        
      for(int i=0; i<4; i++)
      {
          int x, y;
          cin>>x>>y;
          
          a.push_back(x);
          b.push_back(y);
      }
      
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      
      int area=a[3]-a[0];
      
      cout<<area*area<<endl;
    }
    
    return 0;
}