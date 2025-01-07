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
    cin >> t;
    while (t--)
    {
        int n,k;
            cin>>n>>k;
            vector<pair<int,int>>v(n);
            vector<int>b(n),ans(n);
            for(int i=0;i<n;i++)
            {
                int x;cin>>x;
                v[i]={x,i};
            }
            sort(v.begin(),v.end());
            for(int i=0;i<n;i++)
            {
                cin>>b[i];
            }
            sort(b.begin(),b.end());
            for(int i=0;i<n;i++)
            {
                ans[v[i].second]=b[i];
            }
            for(auto i:ans)
            {
                cout<<i<<" ";
            }cout<<endl;
    }
    return 0;
}
