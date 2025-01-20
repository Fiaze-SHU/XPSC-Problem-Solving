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
        int n;
        cin >> n;
        vector<int> v(n), check(2, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                check[1]++;
            if (v[i] == 0)
                check[0]++;
        }
        int ans = (1ll << check[0]) ;
        ans*=check[1];
        cout << ans << endl;
    }
    return 0;
}