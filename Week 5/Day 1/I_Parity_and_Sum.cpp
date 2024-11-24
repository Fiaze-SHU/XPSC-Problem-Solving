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
        vector<int> v(n), even, odd;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                even.push_back(v[i]);
            }
            else
            {

                odd.push_back(v[i]);
            }
        }
        if (even.size() == 0 || odd.size() == 0)
            cout << 0 << endl;
        else
        {
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());

            int x = odd[odd.size() - 1];

            int cnt = 0;

            for (int i = 0; i < even.size(); i++)
            {
                if (x < even[i])
                {
                    cnt = even.size() + 1;
                    break;
                }
                else
                {
                    cnt++;
                    x += even[i];
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
