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
        int mx = 0;

        for (int sum = 2; sum <= 2 * v[n - 1]; sum++)
        {
            int cnt = 0;
            int a = 0, b = n - 1;
            while (a < b)
            {
                if (v[a] + v[b] == sum)
                {
                    cnt++;
                    a++;
                    b--;
                }
                else if (v[a] + v[b] < sum)
                {
                    a++;
                }
                else
                {
                    b--;
                }
            }
            mx = max(mx, cnt);
        }

        cout << mx << endl;
    }
    return 0;
}
