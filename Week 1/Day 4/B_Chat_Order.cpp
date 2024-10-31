#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> v;
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        mp[s]++;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (mp[v[i]] > 0)
        {
            cout << v[i] << endl;
            mp[v[i]] = 0;
        }
    }

    return 0;
}
