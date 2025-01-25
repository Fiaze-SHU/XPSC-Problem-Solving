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
        string target = "URDL";
        string s;
        cin >> s;
        map<char, int> mp;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int side = min(mp['L'], mp['R']);
        int high = min(mp['D'], mp['U']);

        if (min(side, high) == 0)
        {
            if (side == 0)
            {
                int ans = min(1ll, high);
                cout << 2 * ans << endl;
                if (ans > 0)
                    cout << "UD" << endl;
            }
            else
            {
                int ans = min(1ll, side);
                cout << 2 * ans << endl;
                if (ans > 0)
                    cout << "LR" << endl;
            }
        }
        else
        {

            string result = "";
            for (char k : target)
            {
                int x;
                if (k == 'U' || k == 'D')
                {
                    x = high;
                }
                else
                    x = side;
                for (int i = 0; i < x; i++)
                {
                    result += k;
                }
            }
            cout << result.size() << endl;
            cout << result << endl;
        }
    }
    return 0;
}
