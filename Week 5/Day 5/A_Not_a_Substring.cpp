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
        string s;
        cin >> s;
        int n = s.size(); // Correctly initialize n
        string ans = "", ans2 = "";
        for (int i = 0; i < n; i++)
        {
            ans += "()";
        }
        for (int i = 0; i < n; i++)
        {
            ans2 += "(";
        }
        for (int i = 0; i < n; i++)
        {
            ans2 += ")"; // Corrected this line
        }
        bool flag = true, flag2 = true;
        if (ans.find(s) != string::npos) // Corrected this line
        {
            flag = false;
        }
        if (ans2.find(s) != string::npos) // Corrected this line
        {
            flag2 = false;
        }
        if (!flag && !flag2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (flag)
            {
                cout << ans << endl;
            }
            else if (flag2)
            {
                cout << ans2 << endl;
            }
        }
    }
    return 0;
}
