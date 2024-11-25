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
         int n,k;cin>>n>>k;
         for(int i=1;i<=k;i++)
         {
            cout<<i<<" ";

         }
         for(int i=n;i>k;i--)
         {
            cout<<i<<" ";
         }cout<<endl;
     }
    return 0;
}
