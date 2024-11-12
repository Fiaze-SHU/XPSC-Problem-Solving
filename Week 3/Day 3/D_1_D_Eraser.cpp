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
        string s;
        cin >> s;

        int cnt = 0;

        int l = 0, r = 0;
        bool flag = false;

        while (r < n)
        {

            if (s[r] == 'B' && !flag)
            {
                cnt++;
                flag = true;
            }

            if (r - l + 1 == k)
            {
              

                if (s[l] == 'B')
                {
                      flag = false;

                    l += k;
                }
                else
                    l++;
            }
            r++;
        }
        cout << cnt << endl;
    }
    return 0;
}
