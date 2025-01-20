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
        vector<int> v(n), ans;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pq.push(v[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {

          
            if (!pq.empty())
            {
                if (pq.top() == v[i])
                {
                    int x = pq.top();
                    pq.pop();
                    if (!pq.empty())
                    {
                        ans.push_back(pq.top());
                        pq.pop();
                    }
                    pq.push(x);
                }
                else
                {
                    ans.push_back(pq.top());
                    pq.pop();
                }
            }
        }
        if(!pq.empty())
        ans.push_back(pq.top());
       
        if (n == 1)
            cout << -1 << endl;
        else
        {
            if(ans[n-1]==v[n-1])
            {
                swap(ans[n-2],ans[n-1]);
            }
            for (int i = 0; i < ans.size() ; i++)
            {
                cout << ans[i] << " ";
            }
          
            cout << endl;
        }
    }
    return 0;
}
