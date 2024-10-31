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
        int ab = 0, ba = 0, aba = 0, a = 0, b = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (i + 2 < n && s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'a')
            {
                aba++;
                i += 2;
            }
            else if (s[i] == 'b' && s[i + 1] == 'a')
            {
                ba++;
                i++;
            }
            else if (s[i] == 'a' && s[i + 1] == 'b')
            {
                ab++;
                i++;
            }
            else
            {
                if (s[i] == 'a')
                    a++;
                else
                    b++;
            }
        }

        int mn=min(ab,ba);
        int mx=max(ab,ba);
        int rem=mx-mn;
        a+=rem;
        b+=rem;

        // if (n > 1 && (s[n - 2] != 'a' && s[n - 1] == 'a'))
        //     a++;
        // else if (n > 1 && (s[n - 2] != 'b' && s[n - 1] == 'b'))
        //     b++;

        int com = min(ab, ba) * 4 + aba * 3;
        if(n==1)cout<<1<<endl;
        else if (com < n)
            cout << com + max(a, b) << endl;
        else
            cout << com << endl;
    }
    return 0;
}
