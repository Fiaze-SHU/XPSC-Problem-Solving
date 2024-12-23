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
        string s, ans = "";
        cin >> s;
        int x = 0, y = 0;
        for (auto c : s)
        {
            if (c == 'N')
                y++;
            else if (c == 'S')
                y--;
            else if (c == 'E')
                x++;
            else
                x--;
        }
        if (abs(x) % 2 != 0 || abs(y) % 2 != 0)
            cout << "NO" << endl;
        else if (n == 2 && abs(x) == abs(y))
            cout << "NO" << endl;
        else
        {
            int no = 0, so = 0, e = 0, w = 0;
            vector<char> v = {'H', 'R'};

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'N')
                {
                    ans += v[no];
                    no = 1 - no;
                }
                else if (s[i] == 'S')
                {
                    ans += v[so];
                    so = 1 - so;
                }
                else if (s[i] == 'E')
                {
                    ans += v[e];
                    e = 1 - e;
                }
                else
                {
                    ans += v[w];
                    w = 1 - w;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
