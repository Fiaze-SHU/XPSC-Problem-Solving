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
        bool flag = true;
        int last = v[n - 1];
        int idx = -1;
        
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= last)
            {
                last = v[i];
            }
            else
            {
                idx = i;
                break;
            }
        }

       
        if (idx != -1)
        {
            for (int i = idx; i < n - 1; i++)
            {
                if (v[i + 1] < v[i])
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
