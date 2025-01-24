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
        int mx = INT_MIN;
        int mn = INT_MAX;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > mx)
                mx = v[i];
            if (mn > v[i])
                mn = v[i];
        }
        if (v[n - 1] == mx)
            ans = max(ans, mx - mn);
        if (v[0] == mn)
            ans = max(ans, mx - mn);

ans = max(ans,v[n-1]-mn);
ans = max(ans,mx-v[0]);
        

        v.push_back(v[0]);

        for (int i = 0; i < n; i++)
        {
           
                ans = max(ans, v[i] - v[i + 1]);
            
        }
        cout << ans << endl;
    }
    return 0;
}
// wrong answer 5th numbers differ - expected: '817', found: '793'