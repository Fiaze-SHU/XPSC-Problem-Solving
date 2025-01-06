#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char, int> mp;

    for (auto i : s)
    {
        mp[i]++;
    }
    int odd = 0;
    for (auto i : mp)
    {
        if (i.second % 2 != 0)
            odd++;
    }
    if ((s.size() % 2 == 0 && odd > 0) || (s.size() % 2 != 0 && odd != 1))
        cout << "NO SOLUTION" << endl;
    else
    {
        string ans = "", mid = "";

        for(auto i:mp)
        {
            if (i.second %2!=0)
            {
                mid += i.first;
                mp[i.first]--;
                break;
            }

        }

        for (auto i : mp)
        {
            if (i.second % 2 == 0)
            {
                for (int j = 1; j <= i.second / 2; j++)
                {
                    ans += i.first;
                }
            }
    
        }

        cout << ans << mid;

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}
