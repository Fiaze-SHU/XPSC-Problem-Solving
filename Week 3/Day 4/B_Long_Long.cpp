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
        int sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        int l = 0;
        bool flag = false;

        while (l <= n)
        {
            if (l < n && v[l] < 0)
            {
                flag = true;
            }
            else if (flag)
            {
                if (l == n || v[l] > 0)
                {
                    cnt++;
                    flag = false;
                }
            }

            l++;
        }

        cout << sum << " " << cnt << endl;
    }
    return 0;
}
