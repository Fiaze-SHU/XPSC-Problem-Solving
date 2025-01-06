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
        int n, q;
        cin >> n >> q;
        vector<int> v(n), prefix(n), max_v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        max_v[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            max_v[i] = max(max_v[i - 1], v[i]);
        }
        prefix[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i];
        }
        for (int i = 0; i < q; i++)
        {
            int key;
            cin >> key;

            int l = 0, r = n - 1, mid, ans=0;
            while (l <= r)
            {
                mid = (l + r) / 2;

                if (key >= max_v[mid])
                {
                    ans = prefix[mid];

                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            cout << ans << " ";
        }
        cout << endl;

        // for(auto i:max_v)
        // {
        //     cout<<i<<" ";
        // }cout<<endl;
    }
    return 0;
}
