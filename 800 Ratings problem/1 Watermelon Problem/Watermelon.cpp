#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2) // w>2 This condition is used.
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
