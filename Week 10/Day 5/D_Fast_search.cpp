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
    sort(v.begin(), v.end());
    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        auto it = lower_bound(v.begin(), v.end(), l);
        auto itt = upper_bound(v.begin(), v.end(), r);
        cout << itt - it << " ";
    }
    cout << endl;
    return 0;
}
