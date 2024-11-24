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
    string s = "abcdefghijklmnopqrstuvwxyz";
    while (t--)
    {

        int n;
        cin >> n;

        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]] = 0;
        }
        vector<int> v(n);
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (auto it : mp)
            {
                if (it.second == v[i])
                {
                    ans += it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
