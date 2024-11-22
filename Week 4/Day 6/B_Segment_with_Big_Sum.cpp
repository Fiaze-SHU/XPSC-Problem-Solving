#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0, ans = INT_MAX, sum = 0;

    while (r < n)
    {
        sum += v[r];

        if (sum >= s)
        {
            ans = min(ans, r - l + 1);
        }
        //  cout<<"before "<<sum<<endl;

        while (sum >= s && l <= r)
        {
            if (sum >= s)
            {
                ans = min(ans, r - l + 1);
            }

            sum -= v[l];
            l++;
            if (sum >= s)
            {
                ans = min(ans, r - l + 1);
            }
        }
        //  cout<<"after "<<sum<<endl;

        if (sum >= s)
        {
            ans = min(ans, r - l + 1);
        }
        r++;
    }
    if(ans==INT_MAX)cout<<-1<<endl;
    else cout << ans << endl;
    return 0;
}
