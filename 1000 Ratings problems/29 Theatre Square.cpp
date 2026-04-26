#include<iostream>
using namespace std;

int main()
{
    long long n, m, a;
    cin>>n>>m>>a;
    
    long long tilesn=(n+(a-1))/a;
    long long tilesm=(m+(a-1))/a;
    
    cout<<tilesm*tilesn;
    return 0;
}