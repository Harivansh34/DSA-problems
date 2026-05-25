#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int count=0;
        int count1=0;
        int count2=0;
        
        for(int i=1; i<=n-1; i++)
        {
            if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.')
            {
                count=2;
            }
            
        }
        
        for(int i=0; i<s.size(); i++)
        {
             if(s[i]=='.')
             {
                 count1++;
             }
        }
        
        if(count==0)
        {
            cout<<count1<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
       
    }
    return 0;
}

//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        string v ;
        cin >> v ;
        int count = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(v[i]=='.' && v[i]==v[i-1] && v[i]==v[i+1]){
                count=2;
                break;
            }
            else if (v[i]=='.'){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0 ;
}
