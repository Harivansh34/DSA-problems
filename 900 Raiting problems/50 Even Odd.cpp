#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin>>n>>k;
   
   long long count=(n+1)/2;
   
   long long num=0;
   if(k<=count)
   {
      
       num=(2*k)-1;
        cout<<num;
   }
   else
   {
       k=k-count;
       cout<<2*k<<endl;
   }
  
   return 0;
  }