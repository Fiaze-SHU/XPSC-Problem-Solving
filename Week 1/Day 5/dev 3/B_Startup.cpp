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
        map<int, int> mp;
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            mp[a] += b;
        }
        vector<int> v;
        for (auto i : mp)
        {
            v.push_back(i.second);
        }
        sort(v.rbegin(), v.rend());
        int sum = 0;
        int sz=v.size();
        int mn=min(k,sz);
        for (int i = 0; i < min(n, mn); i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}
