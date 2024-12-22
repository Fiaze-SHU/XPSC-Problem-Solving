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
        if (v[n - 1] == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<int> ans;
        int cnt = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
                cnt++;
            bool flag = false;
            if ((i == 0 || v[i-1] == 0) && cnt > 0)
            {
                ans.push_back(cnt);
                flag = true;
                cnt=0;
            }
            if (v[i] == 0)
                cnt = 0;

            if (!flag)
                ans.push_back(0);
        }
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
