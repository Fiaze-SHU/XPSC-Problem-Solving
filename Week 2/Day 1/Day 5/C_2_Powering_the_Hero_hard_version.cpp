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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<int> pq;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
            {
                pq.push(v[i]);
            }
            else if (v[i] == 0)
            {
                if (!pq.empty())
                {
                    cnt += pq.top();
                    pq.pop();
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
