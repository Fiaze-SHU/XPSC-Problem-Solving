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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n + 1, -1);
        v[x] = 0;
        v[y] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] != -1)
                continue;
            map<int, int> mp;
            if (i == 1)
            {
                mp[v[n]]++;
                mp[v[i + 1]]++;
            }
            else if (i == n)
            {
                mp[v[1]]++;
                mp[v[n-1]]++;
            }
            else
            {
                mp[v[i + 1]]++;
                mp[v[i - 1]]++;
            }

            for (int j = 0; j < 3; j++)
            {
                if (mp[j] == 0)
                {
                    v[i] = j;
                    break;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
