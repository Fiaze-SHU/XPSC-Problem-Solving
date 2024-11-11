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
        map<int, int> mp;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            if (mn > x)
                mn = x;
            mp[x]++;
        }
        int cnt = mp.size();

        if (cnt == 1)
            cout << "YES" << endl;
        else if (cnt == 2)
        {
            if (mn == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
