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
         int n,m,h;cin>>n>>m>>h;
         int sum=0;
        
             vector<int>v(n);
             for(int i=0;i<n;i++)
             {
                 cin>>v[i];
             }
             vector<int>v2(m);
             for(int i=0;i<m;i++)
             {
                 cin>>v2[i];
             }
             sort(v.begin(),v.end(),greater<int>());
              sort(v2.begin(),v2.end(),greater<int>());

              for(int i=0;i<min(m,n);i++)
              {
                sum +=min(v[i],(v2[i]*h));
              }
              cout<<sum<<endl;

     }
    return 0;
}
