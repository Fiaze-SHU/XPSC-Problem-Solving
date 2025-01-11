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
        sort(v.begin(), v.end(), greater<int>());

        int cnt = 0;
        int cat = 0;

        for (int i = 0; i < k; i++)
        {
            int x = n - v[i];
            if (v[i] > cat)
            {
                cnt++;
                cat += x;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
