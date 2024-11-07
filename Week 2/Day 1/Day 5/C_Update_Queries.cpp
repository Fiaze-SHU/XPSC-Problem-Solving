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

        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> ind(m);

        for (int i = 0; i < m; i++)
        {
            cin >> ind[i];
        }
        string st;
        cin >> st;

        sort(ind.begin(), ind.end());

        sort(st.begin(), st.end());

        auto it = unique(ind.begin(), ind.end());

        ind.erase(it, ind.end());

        int x = 0;
        int id = 0;

        for (int i = 0; i < n; i++)
        {
            if (x == m)
                break;

            if (i == ind[id] - 1)
            {
                s[i] = st[x];

                x++;
                id++;
            }
        }
        cout << s << endl;
    }
    return 0;
}
