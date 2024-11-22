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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;

        int left = 0, right = n - 1, sum = 0;

        vector<pair<int, int>> vec;

        while (left <= right)
        {
            if (s[left] == 'L' && s[right] == 'R')
            {
                vec.push_back({left, right});

                right--;

                left++;
            }
            if (s[left] != 'L')
                left++;
            if (s[right] != 'R')
                right--;
        }

        vector<int> pre(n + 1, 0);
        pre[1] = v[0];

        for (int i = 2; i <= n; i++)
        {
            pre[i] = pre[i - 1] + v[i - 1];
        }

        for (int i = 0; i < vec.size(); i++)
        {
            int l = vec[i].first;
            int r = vec[i].second;

            sum += pre[r + 1] - pre[l];
        }

        cout << sum << endl;
    }
    return 0;
}