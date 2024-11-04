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

        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        int even = 0, odd = 0;

        for (auto i : mp)
        {
            if (i.second != 0 && i.second % 2 == 0)
                even++;
            if (i.second != 0 && i.second % 2 != 0)
                odd++;
        }
        if (k >= odd - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
