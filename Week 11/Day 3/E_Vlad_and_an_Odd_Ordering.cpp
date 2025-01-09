// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

// 1 3 5 7 9 11 13 15 17 19  2 6 10 14 18  4 12 20  8 16

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
        int n, k;
        cin >> n >> k;
        if (2 * k - 1 <= n)
        {
            cout << 2 * k - 1 << endl;
        }
        else
        {

            int limit = k - (n + 1) / 2;

            for (int i = 1; i <= (log2(n) + 1); i++)
            {
                int x = 2 << i;

                int range = (n + (x / 2)) / x;

                // cout<<limit<<" "<<range<<endl;

                if (limit <= range)
                {
                    int ans = (x / 2) + ((limit - 1) * x);
                    cout << ans << endl;
                    break;
                }
                else
                {
                    limit -= range;
                }
            }
        }
    }
    return 0;
}