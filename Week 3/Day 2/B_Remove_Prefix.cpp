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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        int cnt = 0;
        for (int i = n-1; i >= 0; i--)
        {
            if (mp[v[i]] > 0)
            {
                break;
            }
            cnt++;
            mp[v[i]]++;
        }
        cout << n - cnt << endl;
    }
    return 0;
}
