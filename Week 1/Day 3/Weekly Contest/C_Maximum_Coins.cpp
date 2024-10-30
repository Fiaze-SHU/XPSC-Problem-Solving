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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int sum = 0;
        for (int i = n; i >= 1; i--)
        {
            if (x > 0)
            {
                sum += pow(2, i);
            }
            else sum -= pow(2, i);
               
            
            x--;
        }
        cout << sum << endl;
    }
    return 0;
}
