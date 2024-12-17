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
        string ans = "";
        int n;
        cin >> n;
        vector<int> v;
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0)
            {
                v.push_back(x);
                ans += '1';
            }
            else
            {
                if (x >= v.back() )
                {
                    if(!flag && v.front()<x)
                    {
                        ans+='0';
                        continue;
                    }
                    v.push_back(x);
                    ans += '1';
                }
                else if (x < v.back() && v.front() >= x && flag)
                {
                    v.push_back(x);
                    ans += '1';
                    flag=false;
                }
                else
                    ans += '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}
