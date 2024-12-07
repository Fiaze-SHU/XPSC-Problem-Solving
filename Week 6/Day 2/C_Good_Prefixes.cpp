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
        int sum = 0;
        int cnt = 0;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > mx)
                mx = v[i];
            sum += v[i];
            if (v[i] == 0 && i == 0)
                cnt++;
            else
            {
                if (sum - mx == mx)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
