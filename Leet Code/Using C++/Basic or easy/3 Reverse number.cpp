#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {

        long long r=0;
        long long rev=0;

        while(x!=0)
        {
            r=x%10;
            x/=10;
            rev=rev*10+r;
        }

        if (rev < INT_MIN || rev > INT_MAX)
        {
            return 0;
        }
        else 
        {
            return rev;
        }

    }
};