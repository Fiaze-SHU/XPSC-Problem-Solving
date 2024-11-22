#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0, sum = 0, ans = 0;

    while (r < n)
    {
        sum += v[r];

        while (sum >= s)
        {
            ans += (n - r);
            sum -= v[l];
            l++;
        }

        r++;
    }

    cout << ans << endl;
    return 0;
}
