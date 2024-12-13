#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s;
    cin >> t;
    int n = s.size();
    int final = 0;
    int check = 0;
    int bits = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            final++;
        }
        else if (s[i] == '-')
            final--;

        if (t[i] == '+')
        {
            check++;
        }
        else if (t[i] == '-')
            check--;
        else if (t[i] == '?')
            bits++;
    }
    double ans = 1;
    if (final == check && bits == 0)
    {
        cout << fixed << setprecision(12) << ans << endl;
    }
    else
    {

        int cnt = 0, cnt2 = 0;

        for (int i = 0; i < (1 << bits); i++)
        {
            int num = check;
            for (int k = 0; k < bits; k++)
            {
                if ((i >> k) & 1)
                {
                    num++;
                }
                else
                    num--;
            }
            if (num == final)
                cnt++;
            else
                cnt2++;
        }

        ans = static_cast<double>(cnt) / (cnt + cnt2);

        cout << fixed << setprecision(12) << ans << endl;
    }

    return 0;
}
