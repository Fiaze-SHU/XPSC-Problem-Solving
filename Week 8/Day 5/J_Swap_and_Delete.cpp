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
        int one = 0, zero = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (zero > 0)
                    zero--;
                else
                {
                    idx = i;
                    break;
                }
            }
            else
            {
                if (one > 0)
                    one--;
                else
                {
                    idx = i;
                    break;
                }
            }
        }
        if(idx==-1)cout<<0<<endl;
        else
        cout << n - idx << endl;
    }
    return 0;
}
