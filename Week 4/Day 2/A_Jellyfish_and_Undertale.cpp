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
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;

        if (b > 1)
        {
           ans += abs(b - 1);
           
        }

        for (int i = 0; i < n; i++)
        {
            if(a>=v[i]+1)ans +=v[i];
            else ans += a-1;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
