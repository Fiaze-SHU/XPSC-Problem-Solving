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
        int x, k, y;
        cin >> x >> y >> k;

        while (x > 1)
        {
            int need = y - (x % y);
            if (need >= k)
            {
                x += k;
                k = 0;
            }
            else
            {
                k -= need;
                x += need;
            }
            while (x % y == 0)
                x /= y;

            if (k <= 0)
                break;
        }
        if (k > 0)
        {
            k = k % (y - 1);
            x += k;
            while (x % y == 0)
                x /= y;
        }
        cout << x << endl;
    }
    return 0;
}
