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
         int n;cin>>n;
         string s,ans;
         cin>>s;
         ans=s;
         reverse(ans.begin(),ans.end());

         if(ans>=s)cout<<s<<endl;
         else cout<<ans+s<<endl;
         
     }
    return 0;
}
