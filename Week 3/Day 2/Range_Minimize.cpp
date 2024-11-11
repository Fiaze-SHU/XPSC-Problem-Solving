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
        sort(v.begin(), v.end());
        // for (auto i : v)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;

        int mn = INT_MAX, mx = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > mx)
                mx = v[i];
            if (v[i] < mn)
                mn = v[i];
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(mx - mn);
        mn = INT_MAX;
        mx = 0;
        for (int i = 2; i < n; i++)
        {
            if (v[i] > mx)
                mx = v[i];
            if (v[i] < mn)
                mn = v[i];
        }
        pq.push(mx - mn);

        mn = INT_MAX;
        mx = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (v[i] > mx)
                mx = v[i];
            if (v[i] < mn)
                mn = v[i];
        }
        pq.push(mx - mn);

        cout << pq.top() << endl;
    }
    return 0;
}
