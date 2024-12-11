#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

const int B = 30;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, K;
        cin >> n >> K;
        vector<int> v(n), bits(B + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int k = B; k >= 0; k--)
            {
                if ((v[i] >> k) & 1)
                {
                    bits[k]++;
                }
            }
        }
        int ans = 0;
        for (int k = B; k >= 0; k--)
        {
            if (bits[k] == n)
            {
                ans += (1 << k);
            }
            else
            {
                int need = n - bits[k];
                if (K >= need)
                {
                    K -= need;
                    ans += (1 << k);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
