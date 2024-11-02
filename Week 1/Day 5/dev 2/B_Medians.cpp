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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }
        if (n != k && k != 1 && k % 2 != 0)
        {
            cout << 5 << endl;
            cout << 1 << " " << 2 << " " << k << " " << k + 1 << " " << k + 2 << endl;
        }
        else if (k % 2 == 0)
        {
            cout << 3 << endl;
            cout << 1 << " " << k << " " << v[k] << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
