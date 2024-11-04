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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            string s;
            cin >> s;
            int cnt = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'U')
                    cnt--;
                else
                    cnt++;
            }
            v[i] = (v[i] + cnt) % 10;
        }
        for (auto i : v)
        {
            if (i >= 0)
                cout << i << " ";
            else
                cout << i + 10 << endl;
        }
        cout << endl;
    }
    return 0;
}
