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
        vector<int> v(n), v1(n), diff(n);
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {

            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            diff[i] = (v1[i] - v[i]);
        }
        sort(diff.begin(), diff.end());
        int l = 0, r = n - 1, cnt = 0;
        while (l < r)
        {
            // cout<<diff[l]<<endl;
            int x = diff[l] + diff[r];
            if (x >= 0)
            {
                cnt++;
                r--;
                l++;
            }
            else if (x < 0)
                l++;
        }
        cout << cnt << endl;
    }
    return 0;
}
