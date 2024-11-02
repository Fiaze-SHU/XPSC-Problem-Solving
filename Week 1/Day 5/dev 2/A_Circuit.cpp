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
        int a=2*n;
        vector<int> v(a);
        int one = 0, zero = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                one++;
            else
                zero++;
        }
        if (one == 0 || zero == 0)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            if (one <= zero)
            {
                if (one % 2 != 0)
                    cout << 1 << " " << one << endl;
                else
                    cout << 0 << " " << one << endl;
            }
            else
            {
                if (one % 2 != 0)
                    cout << 1 << " " << zero << endl;
                else
                    cout << 0 << " " << zero << endl;
            }
        }
    }
    return 0;
}
