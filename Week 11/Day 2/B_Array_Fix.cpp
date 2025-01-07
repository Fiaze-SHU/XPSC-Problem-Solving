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
        int n, target = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= target)
            {
                int a = v[i] / 10;
                int b = v[i] % 10;
                if (a >= target)
                {
                    if (b >= a)
                    {
                        target = b;
                    }
                    else
                    {
                        target = v[i];
                    }
                }
                else
                {
                    target = v[i];
                }
            }
            else
            {
                if (v[i] < target)
                {
                    flag = false;
                    break;
                }
                target = v[i];
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
