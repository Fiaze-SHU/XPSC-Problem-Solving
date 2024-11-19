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

        vector<char> ans;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int a = s[i - 1] - '0';
                int b = s[i - 2] - '0';
                b *= 10;
                b += a;
                char ch = b - 1 + 'a' ;
                ans.push_back(ch);
                i -= 2;
            }
            else
            {
                int a = s[i] - '0';
                char ch = a - 1 + 'a' ;
                ans.push_back(ch);
            }
        }
        reverse(ans.begin(), ans.end());
        for (auto i : ans)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
