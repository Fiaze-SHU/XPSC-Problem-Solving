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
        vector<int> diff;
        for (int i = 0; i < n; i++)
        {
            int x = abs((i + 1) - v[i]);
            if (x > 0)
                diff.push_back(x);
        }
        sort(diff.begin(), diff.end());
        // for(auto i:diff)
        // {
        //     cout<<i<<" ";
        // }cout<<endl;

        if (diff.size() == 0)
            cout << 0 << endl;
        else
        {
            int ans;
            int x = diff[0];
            for (int i = x; i >= 1; i--)
            {
                bool flag = true;
                for (int j = 0; j < diff.size(); j++)
                {
                    if (diff[j] % i != 0)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    ans = i;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
