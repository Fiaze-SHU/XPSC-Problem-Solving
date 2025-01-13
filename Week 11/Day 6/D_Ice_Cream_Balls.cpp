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
        int n;cin>>n;

        auto ok = [&](int mid)
        {
           return (mid*(mid-1))/2<=n;


        };


        int l = 1,r=2e9,mid,ans;
        while(l<=r)
        {
            mid = l + (r-l)/2;

            if(ok(mid))
            {
                ans = mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        int x = n - (ans*(ans-1)/2);
        cout<<ans+x<<endl;
    }
    return 0;
}
