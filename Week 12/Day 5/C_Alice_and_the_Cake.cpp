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
        int n, sum = 0;
        cin >> n;
        vector<int> v(n);
        priority_queue<int> pq, check;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pq.push(v[i]);
            sum += v[i];
        }
        bool flag = true;
        check.push(sum);

        while (!pq.empty())
        {
            if(check.top()<pq.top())
            {
                flag=false;
                break;

            }
            else if(check.top()>pq.top())
            {
                int x = ceil(check.top()/2.0);
                int y = floor(check.top()/2.0);
                check.pop();
                check.push(x);
                check.push(y);
            }
            else if(check.top()==pq.top())
            {
                pq.pop();
                check.pop();
            }
            if(pq.empty())
            {
                flag=true;
                break;
            }

        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
