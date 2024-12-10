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
        deque<int> dq;

        for (int k = 0; k <= __lg(n); k++)
        {
            if ((n >> k) & 1)
            {
                int value = n - (1ll << k);
                if (value > 0)
                {
                    dq.push_front(value);
                }
            }
        }
        dq.push_back(n);
        cout << dq.size() << endl;
        for (auto i : dq)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
