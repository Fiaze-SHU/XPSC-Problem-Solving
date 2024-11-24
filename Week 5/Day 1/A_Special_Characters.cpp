#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--) {
         int n;
             cin>>n;
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
            string s="";
            for(int i=1;i<=n/2;i++)
            {
                s+="AAB";
            }
            cout<<s<<endl;
        }
     }
    return 0;
}
