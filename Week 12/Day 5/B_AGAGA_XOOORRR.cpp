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
        bool flag = false;

        int total = v.front();
        for (int i = 1; i < n; i++)
        {
            total ^= v[i];
        }
        if (total == 0)
            cout << "YES" << endl;
        else
        {
            int cnt = 0;
            int x = 0;
            for (int i = 0; i < n; i++)
            {
                x ^= v[i];
                if (x == total)
                {
                    cnt++;
                    x=0;
            }
            }
            if (cnt >= 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
