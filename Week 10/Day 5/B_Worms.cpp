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
    vector<int> v(n), prefix(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    prefix[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    while (q--)
    {
        int key;
        cin >> key;
        auto it = lower_bound(prefix.begin(), prefix.end(), key);
        
            cout << it - prefix.begin() +1 << endl;
    }
    return 0;
}