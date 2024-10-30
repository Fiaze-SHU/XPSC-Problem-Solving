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
        string s, tg;
        cin >> s >> tg;
        int not_match = 0, s_one = 0, t_one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != tg[i])
            {
                not_match++;
            }
            if (s[i] == '1')
            {
                s_one++;
            }
            if (tg[i] == '1')
            {
                t_one++;
            }
        }
        if (not_match % 2 != 0 || k < not_match / 2)
        {
            cout << "NO" << endl;
        }
        else if (k >= not_match/2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << (k % 2 == not_match / 2 % 2 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
