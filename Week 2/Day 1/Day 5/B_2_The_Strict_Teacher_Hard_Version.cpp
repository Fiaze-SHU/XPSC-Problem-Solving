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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> teacher(m);
        map<int, int> mp;

        for (int i = 0; i < m; i++)
        {
            cin >> teacher[i];
            mp[teacher[i]]++;
        }

        sort(teacher.begin(), teacher.end());

        while (q--)
        {
            int david;
            cin >> david;

            auto it = upper_bound(teacher.begin(), teacher.end(), david);
            if (mp[david] > 0)
            {
                cout << 0 << endl;
            }
            else if (it == teacher.begin())
            {
                cout << teacher.front() - 1 << endl;
            }
            else if (it == teacher.end())
            {
                cout << n - teacher.back() << endl;
            }
            else
            {
                int last = *it;
                int pos = distance(teacher.begin(), it);
                
                int first = teacher[pos - 1];

                cout << (last - first) / 2 << endl;
            }
        }
    }
    return 0;
}
