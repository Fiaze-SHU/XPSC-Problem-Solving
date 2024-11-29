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
        int last, secondLast, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == n - 1)
            {
                last = v[i];
            }
            else if (i == n - 2)
            {
                secondLast = v[i];
            }
            else
            {
                sum += v[i];
            }
        }
        cout << last - (secondLast - sum) << endl;
    }
    return 0;
}
