#include <iostream>
using namespace std;

class Solution {
public:
    int countDigits(int n) {

        int count=0;

        while(n--)
        {
            n/=10;
            count++;
        }

        return count;

    }
};

int main() {
    int n = -980;
 
    Solution obj;
    cout << obj.countDigits(n) << endl;
 
    return 0;
}