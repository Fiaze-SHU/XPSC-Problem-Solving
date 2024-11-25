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
        int zero = 0, el = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                zero++;
            else
                el++;
            if (v[i] > 1)
                flag = true;
        }
        if (zero > el + 1)
        {
            if (flag || zero==n)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
