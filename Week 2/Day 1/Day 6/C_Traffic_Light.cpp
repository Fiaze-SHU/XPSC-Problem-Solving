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
        char ch;
        cin >> ch;
        string s;
        cin >> s;

        if (ch == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {

            s += s[i];
            if (s[i] == 'g')
                break;
        }

        int len = 0, ans = 0;
        bool flag = false;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
            {
                ans = max(ans, len);
                len = 0;
                flag = false;
            }
            if (s[i] == ch && !flag)
            {
                len = 0;
                flag = true;
            }
            if (flag)
                len++;
        }
        cout << ans << endl;
    }
    return 0;
}
