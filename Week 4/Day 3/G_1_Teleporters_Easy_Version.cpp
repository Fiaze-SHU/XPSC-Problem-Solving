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
         int n,k;
             cin>>n>>k;
             vector<int>v(n);
             for(int i=0;i<n;i++)
             {
                int x;cin>>x;
                x+= (i+1);
                 v[i]=x;
             }
             sort(v.begin(),v.end());
             int cnt=0;
             for(int i=0;i<n;i++)
             {
                if(k>=v[i])k-=v[i];
                else break;
cnt++;
             }
             cout<<cnt<<endl;
     }
    return 0;
}
