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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> v(n), b(m), ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int i = 0, j = 0;
        bool flag = true;
        while (i < n || j < m)
        {
            if (i < n && v[i] == 0)
            {
                ans.push_back(0);
                k++;
                i++;
            }
            else if (j < m && b[j] == 0)
            {
                ans.push_back(0);
                k++;
                j++;
            }
            else if (i < n && v[i] <= k)
            {
                ans.push_back(v[i]);
                i++;
            }
            else if (j < m && v[j] <= k)
            {
                ans.push_back(b[j]);
                j++;
            }
            else
            {
                flag = false;
                cout << -1 << endl;
                break;
            }
        }
        if (flag)
        {
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
