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
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x = i, y = j;
                int cnt = v[x][y];
                while (x < n && y < m)
                {
                    x++;
                    y++;
                    if (x >= n || y >= m)
                        break;
                    cnt += v[x][y];
                }
                x = i;
                y = j;
                while (x >= 0 && y >= 0)
                {
                    x--;
                    y--;
                    if (x < 0 || y < 0)
                        break;
                    cnt += v[x][y];
                }
                 x = i;
                y = j;

                while (x < n && y >= 0)
                {
                    x++;
                    y--;
                    if (x >= n || y < 0)
                        break;
                    cnt += v[x][y];
                }
                 x = i;
                y = j;
                while (x >= 0 && y < m)
                {
                    x--;
                    y++;
                    if (x < 0 || y >= m)
                        break;
                    cnt += v[x][y];
                }

                sum = max(sum, cnt);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
