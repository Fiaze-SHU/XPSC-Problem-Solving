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
        vector<pair<int, int>> v(n);
        int tgt = n - k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = {x, i};
        }
        sort(v.begin(), v.end());
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i].second > v[i - 1].second)
                cnt++;
            else
                break;
        }
        int x =((n - cnt) % k)?1:0 ;

        cout << (n - cnt) / k + x<< endl;
    }
    return 0;
}
