#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double r;
    cin>>r;
    
    double π = 3.141592653;
    
    double area= π*r*r;
    
    cout<<fixed<<setprecision(9)<<area;
    
}