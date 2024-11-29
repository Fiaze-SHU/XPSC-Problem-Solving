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
        vector<int> ans;

        int l = n * n;
        int r = 1;

        while (!(l < r))
        {
            if (l == r)
                ans.push_back(r);
            else
            {
                ans.push_back(l);
                ans.push_back(r);
            }
            l--;
            r++;
        }

        int j = 0;

        for (int i = 1; i <= n; i++)
        {
            stack<int> st;
            queue<int> q;
            int a = 0; // Corrected this to start from 0

            while (a < n) // Modified the condition to fill the row completely
            {
                if (i % 2 == 0)
                {
                    st.push(ans[j]);
                }
                else
                {
                    q.push(ans[j]);
                }
                a++;
                j++;
            }
            if (!st.empty())
            {
                while (!st.empty())
                {
                    cout << st.top() << " ";
                    st.pop();
                }
            }
            else
            {
                while (!q.empty())
                {
                    cout << q.front() << " ";
                    q.pop();
                }
            }
            cout << endl;
        }
    }
    return 0;
}
