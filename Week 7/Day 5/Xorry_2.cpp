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
        int bits = __lg(n), one = 0, zero = 0;
        bool flag = false;

        for (int k = bits; k >= 0; k--)
        {
            if ((n >> k) & 1)
            {
                one++;
            }
            else
            {
                if(flag)zero++;
            }
            if (one == 2)
                flag = true;
        }

        cout << (1 << zero) << endl;
    }
    return 0;
}
