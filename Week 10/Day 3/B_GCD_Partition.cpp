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
        int n,sum=0;
            cin>>n;
            vector<int>v(n);
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
                sum += v[i];
            }
            int ans=0;
            int x=0;
           for(int i=0;i<n-1;i++)
           {
            x +=v[i];
            ans = max(ans,__gcd(sum-x,x));

           }x=0;
           for(int i=n-1;i>=1;i--)
           {
            x +=v[i];
            ans = max(ans,__gcd(sum-x,x));

           }
           cout<<ans<<endl;

    }
    return 0;
}
