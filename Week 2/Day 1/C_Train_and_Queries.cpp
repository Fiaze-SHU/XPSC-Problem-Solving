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
        int n, q;
        cin >> n >> q;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            mp[x].insert(i);
        }
        for(int i=0;i<q;i++)
        {
            int l,r;cin>>l>>r;

            if(mp.find(l)==mp.end() || mp.find(r)==mp.end())
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int st= *mp[l].begin();
                int end= *mp[r].rbegin();
                if(st<end)
                {
                    cout<<"YES"<<endl;

                }
                else cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}
