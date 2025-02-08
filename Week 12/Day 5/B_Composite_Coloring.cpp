#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> check = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
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

        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                if (v[i] % check[j] == 0)
                {
                    mp[check[j]].push_back(i);
                    break;
                }
            }
        }

        int color = 1;
        vector<int> ans(n);

        for (auto [x, y] : mp)
        {
            for (auto pos : y)
            {
                ans[pos] = color;
            }
            color++;
        }
        cout << mp.size() << endl;
        // for (auto [x,y] : mp)
        // {
        //     cout << x << " " << y.size() << endl;
        // }
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
