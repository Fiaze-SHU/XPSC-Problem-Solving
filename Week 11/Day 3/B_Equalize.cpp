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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        // for (auto i : v)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;

        int r = 0, l = 0, len = 0;

        while (r < v.size())
        {
            if (v[r] - v[l] <= n - 1)
            {

                len = max(len, r - l + 1);
            }
            else
            {
                l++;
            }

            r++;
        }
        cout << len << endl;
    }
    return 0;
}
