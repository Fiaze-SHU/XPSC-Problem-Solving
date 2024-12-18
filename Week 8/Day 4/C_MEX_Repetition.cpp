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
        vector<int> v(n);

        int max_val = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (max_val < v[i])
                max_val = v[i];
        }

        vector<bool> freq(max_val + 2, false);

        int mx;

        for (int i = 0; i < n; i++)
        {
            freq[v[i]] = true;
        }

        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] == false)
            {
                mx = i;
                break;
            }
        }
        v.push_back(mx);

        int idx = (n * k) % (n + 1);

        for (int i = idx; i < v.size(); i++)
        {
            cout << v[i] << " ";
            n--;
            if (n == 0)
                break;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
