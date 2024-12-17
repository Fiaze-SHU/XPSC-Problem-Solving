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
        int ans = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            int l = 0;
            int r = n - 1;
            int cnt = 0;
            bool flag = true;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == char(i + 'a'))
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == char(i + 'a'))
                {
                    r--;
                    cnt++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans = min(ans, cnt);
            }
        }
        if(ans==INT_MAX)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
