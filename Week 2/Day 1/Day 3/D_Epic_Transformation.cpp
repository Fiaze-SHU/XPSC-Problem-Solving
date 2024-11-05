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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : mp)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if(pq.size()<2)
            {
                break;
            }
            int x, y;
            x = pq.top();
            pq.pop();

            y = pq.top();
            pq.pop();
            x--;
            y--;
            if (x > 0)
                pq.push(x);
            if (y > 0)
                pq.push(y);
        }
        if(pq.size()==0)cout<<0<<endl;
        else cout<<pq.top()<<endl;
    }
    return 0;
}
