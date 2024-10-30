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
        int a = -1;
        char ch;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                a = i;
                ch = s[i];
            }
        }
        if (a == -1)
        {
            char add;
            for (char i = 'a'; i <= 'z'; i++)
            {
                if (s[s.size() - 1] != i)
                {
                    add = i;
                    break;
                }
            }
            cout << s << add << endl;
        }
        else
        {

            char add;
            for (char i = 'a'; i <= 'z'; i++)
            {
                if (s[a] != i)
                {
                    add = i;
                    break;
                }
            }
            for (int i = 0; i < s.size(); i++)
            {
                cout << s[i];
                if (i == a)
                    cout << add;
            }
            cout << endl;
        }
    }
    return 0;
}
