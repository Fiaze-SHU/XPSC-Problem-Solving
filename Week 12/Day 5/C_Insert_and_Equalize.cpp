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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());

        int GCD = 0;
        int mx = v[n - 1];

        for (int i = 0; i < n; i++)
        {

            GCD = gcd((mx - v[i]), GCD);
        }
        vector<int> check = v;

        check.erase(unique(check.begin(), check.end()), check.end());
        int need = mx;
        int st = mx;
        int diff;
        if (GCD == 0)
        {
            diff = 1;
        }
        else
            diff = GCD;

        while (true)
        {
            if (mp[st] == 0)
            {
                need = st;
                break;
            }
            st -= diff;
        }
        v.push_back(need);

        int cnt=0;

        for(int i=0;i<v.size();i++)
        {
            cnt += ((mx-v[i])/diff);
        }

        cout << cnt << endl;
    }
    return 0;
}
