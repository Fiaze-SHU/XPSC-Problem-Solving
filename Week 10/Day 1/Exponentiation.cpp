#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
const int MOD = 1e9 + 7;

int power(int x, int n)
{
    int ans = 1 % MOD;

    while (n)
    {
        if (n & 1)
        {
            ans = (1ll * ans % MOD * x % MOD) % MOD;
        }

        x = 1ll * x * x % MOD;
        n >>= 1;
    }

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        cout << power(x, n) << endl;
    }
    return 0;
}
