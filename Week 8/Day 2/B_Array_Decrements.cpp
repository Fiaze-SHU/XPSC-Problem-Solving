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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool flag = true;
        int diff = 0, ans = 0;
        set<int> st;
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = false;
                break;
            }
            if (a[i] == b[i] && a[i] == 0)
                continue;
            else
            {
                if (b[i] == 0)
                {

                    mx = max(mx, a[i]);
                }
                else
                {
                    ans = abs(a[i] - b[i]);
                    st.insert(ans);
                }
            }
        }
        int x;
        if (st.empty())
        {
            x = INT_MAX;
        }
        else
            x = *st.begin();
        if (flag && st.size() <= 1 && mx <= x)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
