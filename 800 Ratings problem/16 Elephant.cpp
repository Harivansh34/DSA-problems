#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    
    int moves=0;
    
    
   while(x>0)
   {
       x=x-5;  /// if x>0 so loop will run and moves++
       moves++;
   }
    
    cout<<moves<<endl;
    
    
    return 0;
}
