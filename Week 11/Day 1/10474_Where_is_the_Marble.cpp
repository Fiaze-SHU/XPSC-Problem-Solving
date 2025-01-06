#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cs = 1;

    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0)
            break;
        map<int, priority_queue<int, vector<int>, greater<int>>> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {

            mp[v[i]].push(i + 1);
        }

        cout << "CASE# " << cs++ << ":" << endl;

        for (int i = 1; i <= q; i++)
        {
            int key;
            cin >> key;
            int x = *lower_bound(v.begin(), v.end(), key);
            if (x == key)
                cout << key << " found at " << mp[key].top() << endl;
            else
                cout << key << " not found" << endl;
        }
    }
    return 0;
}
