#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    vector<pair<int, int>> vp;
    vp.push_back({x, 1});

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (x / i != i)
            {
                int a = max(x / i, i);
                int b = min(x / i, i);
                if (x == ((a / __gcd(a, b)) * b))
                    vp.push_back({a, b});
            }
        }
    }
    sort(vp.begin(), vp.end());
    cout << vp[0].second << " " << vp[0].first << endl;
    return 0;
}
