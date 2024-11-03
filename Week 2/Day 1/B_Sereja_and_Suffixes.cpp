#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n,m;
         cin>>n>>m;
         vector<int>v(n+1);
         vector<int>pre(n+1);
         for(int i=1;i<=n;i++)
         {
             cin>>v[i];
         }
         set<int>s;

         


         for(int i=n;i>=1;i--)
         {
            s.insert(v[i]);
            pre[i]=s.size();
            
         }
         for(int i=0;i<m;i++)
         {
            int pos;cin>>pos;
            cout<<pre[pos]<<endl;
         }
    return 0;
}
