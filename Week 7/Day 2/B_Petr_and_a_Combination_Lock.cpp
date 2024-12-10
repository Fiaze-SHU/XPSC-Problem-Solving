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
    bool flag = false;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                sum += v[k];
            }
            else
                sum -= v[k];
        }
        if (sum % 360 == 0)
            flag = true;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
