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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 0, r = 0, ans = 0, sum = 0;

        while (r < n)
        {
            sum += v[r];

            if (sum == s)
            {
                ans = max(ans, r - l + 1);
            }

            while (sum > s)
            {
                sum -= v[l];
                l++;
            }
            if (sum == s)
            {
                ans = max(ans, r - l + 1);
            }

            r++;
        }
        if(ans==0)cout<<-1<<endl;
        else
        cout<<n-ans<<endl;
    }
    return 0;
}
