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
        int cnt = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            while (v[i] >= v[i + 1])
            {
                if (v[i] < v[i + 1] || v[i] == 0)
                {
                    break;
                }
                v[i] /= 2;
                cnt++;
            }
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] <= v[i - 1])
            {
                flag = false;
                break;
            }
        }
        // for(auto i:v)
        // {
        //     cout<<i<<" ";
        // }cout<<endl;
        if (flag)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
