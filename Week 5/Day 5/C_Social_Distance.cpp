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
        string s;
        cin >> s;

        int cnt = 0;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                v.push_back(i + 1);
            }
        }

        if (v.size() == 0)
        {
            for (int i = 1; i <= n; i += (k + 1))
            {
                cnt++;
            }
        }
        else
        {

            for (int i = v[v.size() - 1] + (k + 1); i <= n; i += (k + 1))
            {
                cnt++;
            }
            for (int i = 1; i <= v[0] - (k + 1); i += (k + 1))
            {
                cnt++;
            }
            int st, ed;

            for (int i = 0; i < v.size() - 1; i++)
            {
                st = v[i];
                ed = v[i + 1];
                for (int j = st + (k + 1); j <= ed - (k + 1); j += (k + 1))
                {
                    cnt++;
                }
            }
           
        }
         cout << cnt << endl;
    }
    return 0;
}
