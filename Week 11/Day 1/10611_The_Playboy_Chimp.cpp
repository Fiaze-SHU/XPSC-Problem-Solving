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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v.erase(unique(v.begin(), v.end()), v.end());

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int key;
        cin >> key;

        auto it = lower_bound(v.begin(), v.end(), key);
        auto it2 = upper_bound(v.begin(), v.end(), key);

        if (it==v.begin())
            cout << "X" << " ";
        else
            cout << *--it << " ";
        if (it2 == v.end())
            cout << "X" << endl;
        else
            cout << *it2 << endl;
    }

    return 0;
}
