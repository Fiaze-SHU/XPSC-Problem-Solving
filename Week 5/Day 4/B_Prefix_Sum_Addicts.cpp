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
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        if (n == 1 || k == 1)
        {
            cout << "Yes" << endl;
            continue;
        }

        vector<int> a(k);
        for (int i = 1; i < k; i++)
        {
            a[i] = v[i] - v[i - 1];
        }

        bool flag = true;
        for (int i = 2; i < k; i++)
        {
            if (a[i] < a[i - 1])
            {
                flag = false;
                break;
            }
        }

        if (flag && (n - k + 1) * a[1] >= v[0])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
