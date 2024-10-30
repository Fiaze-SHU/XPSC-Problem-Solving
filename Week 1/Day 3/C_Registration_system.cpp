#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, int> mp;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] > 0)
        {
            // char a = mp[s] + '0';
            string ans = s + to_string(mp[s]);
            v.push_back(ans);
            mp[s]++;
            mp[ans]++;
        }
        else
        {
            mp[s]++;
            v.push_back("OK");
        }
    }
    for (auto i : v)
    {
        cout << i << endl;
    }

    return 0;
}
