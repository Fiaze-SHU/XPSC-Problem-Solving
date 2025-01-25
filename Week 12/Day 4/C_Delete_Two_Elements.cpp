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
        double sum = 0;
        double mean;
        cin >> n;
        vector<double> v(n); 
        map<double, int> mp; 
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            mp[v[i]]++;
        }
        mean = (sum / n) * 2.0;
        // cout << mean << endl;
        int cnt = 0;

        for (int i = 0; i < n; i++) 
        {
            mp[v[i]]--;

            cnt += mp[mean - v[i]];
        }
        cout << cnt << endl; 
    }
    return 0;
}
