class Solution {
public:
    bool isPrime(int n) {

        for(int i=1; i<=n; i++)
        {
            if((n%i==0 && i!=n) && (i!=1))
            {
                return false;
            }
            else
            {
                return true;
            }
    }
};