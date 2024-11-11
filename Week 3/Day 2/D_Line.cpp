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

        vector<int> ans;
        int sum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                sum += (i);
            }
            else
            {
                sum += n - (i + 1);
            }
        }
        ans.push_back(sum);

        for (int i = 0; i < n / 2; i++)
        {
            int left = i;
            int right = n - (i + 1);

            if (s[left] != 'R')
            {
                ans.push_back(ans.back() + (n - i - 1) - left);
            }
            if (s[right] != 'L')
            {
                ans.push_back(ans.back() + right - (n - right - 1));
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (ans.size() > i)
                cout << ans[i] << " ";
            else
                cout << ans.back() << " ";
        }
        cout << endl;
    }
    return 0;
}\
