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
        int n, m;
        cin >> n >> m;
        
        int l = max(0ll,n-m);
        int r = n+m;
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int block=r/(1ll<<i);
            int block2=l/(1ll<<i);

            if(block%2)
            {
                ans |= (1ll<<i);
                continue;
            }
            if(block!=block2)
            {
                ans |= (1ll<<i);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
