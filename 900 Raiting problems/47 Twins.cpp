#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    
    int total=0;
    for(int i = 0 ; i<n ; i++){
        total+=v[i];
    }
    
    int count=0;
    int t1=0;
    for(int i=0; i<n; i++)
    {
        t1+=v[i];
        count++;
        if(t1>total-t1){
            cout << count << endl;
            break;
        }
    }
    return 0 ;
}