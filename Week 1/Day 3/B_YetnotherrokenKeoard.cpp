#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sb = 0, bb = 0;
        vector<char> v;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
                sb++;
            else if (s[i] == 'B')
                bb++;
            else
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    if (sb>0)
                        sb--;
                    else
                        v.push_back(s[i]);
                }
                else if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    if (bb>0)
                        bb--;
                    else
                        v.push_back(s[i]);
                }
            }
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}