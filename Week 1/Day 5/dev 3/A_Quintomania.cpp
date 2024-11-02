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

        // sort(v.begin(), v.end());
        bool flag = true;
        
        for (int i = 0; i < n - 1; i++)
        {
            // if (abs(v[i] - v[i + 1]) == 0)
            //     continue;
             if (abs(v[i] - v[i + 1]) != 7 && abs(v[i] - v[i + 1]) != 5)
            {
                flag = false;
                // cout<<v[i]<<" "<<v[i+1]<<endl;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
