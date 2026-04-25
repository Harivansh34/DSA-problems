#include<iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;  // n=number of words, n does not depend on length of word, but depends on number of words like 1st word= alpha, 2nd word= beta etc.
    
   while(n--)  // n-- =number of test cases.
{
    string str;
    cin>>str;

    int len=str.length();      //check length of string , it depends on length of a(1) word.

    if(len>10)                 // if length is more than 10 than it is too long word.      
    {
        cout<<str[0]<<len-2<<str[len-1]<<endl;
    }

    else{
        cout<<str<<endl;
    }
}


    return 0;
}