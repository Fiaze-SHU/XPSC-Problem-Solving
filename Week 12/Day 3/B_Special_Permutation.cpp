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
        int n, a, b;
        cin >> n >> a >> b;
        deque<int> dq;

        for (int i = a; i <= b; i++)
        {
            dq.push_back(i);
        }
        for (int i = 1; i < a; i++)
        {
            dq.push_back(i);
        }
        for (int i = b + 1; i <= n; i++)
        {
            dq.push_front(i);
        }
        bool flag = false, first = false, second = false;
        for (int i = 0, j = n / 2; i < n / 2, j < n; i++, j++)
        {
            if (dq[i] == a)
                first = true;
            if (dq[j] == b)
                second = true;
        }
        if (first && second)
            flag = true;

        for (int i = 0; i < n; i++)
        {
            if (i < n / 2)
            {
                if (dq[i] < a)
                    flag = false;
            }
            else if (dq[i] > b)
                flag = false;

            if (!flag)
                break;
        }
        if (!flag)
            cout << -1 << endl;
        else
        {
            for (auto i : dq)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
