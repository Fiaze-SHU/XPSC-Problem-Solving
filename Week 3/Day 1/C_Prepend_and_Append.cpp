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
        string s;
        cin >> s;
        int l = 0;
        int r = n - 1;
        int ans = n;
        while (l <= r)
        {
            if (s[l] == s[r])
                break;
            l++;
            r--;
            ans -= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
