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
        int one = 0, zero = 0;
        vector<int> pre_z(n + 1), pre_o(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                zero++;
            else
                one++;
        }
        int o = 0, z = zero;

        for (int i = 0; i < n; i++)
        {

            if (v[i] == 0)
                z--;
            pre_z[i] = z;
            pre_o[i] = o;
            if (v[i] == 1)
                o++;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << pre_z[i] << " ";
        // }
        // cout << endl;
        // cout << "one" << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << pre_o[i] << " ";
        // }
        // cout << endl;

        int mx = 0;
        int idx = -1;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                int x = pre_o[i] - pre_z[i];
                if (x > mx)
                {
                    idx = i;
                    mx = x;
                }
            }
            else
            {
                int x = pre_z[i] - pre_o[i];
                if (x > mx)
                {
                    idx = i;
                    mx = x;
                }
            }
        }
        int cnt = 0;
        if (idx != -1)
        {
            if (v[idx] == 1)
                v[idx] = 0;
            else
                v[idx] = 1;
        }
        zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                zero++;
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                zero--;

            if (v[i] == 1)
                cnt += zero;
        }
        cout<<cnt<<endl;

        // for (int i = 0; i < n; i++)
        // {
        // }
    }
    return 0;
}
