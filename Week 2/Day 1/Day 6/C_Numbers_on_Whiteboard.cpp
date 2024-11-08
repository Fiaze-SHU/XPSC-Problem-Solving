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
        multiset<int> ml;
        for (int i = 0; i < n; i++)
        {
            ml.insert(i + 1);
        }
        vector<pair<int, int>> v;
        while (!ml.empty())
        {
            if (ml.size() == 1)
                break;
            int a = *ml.rbegin();

            ml.erase(prev(ml.end()));
            int b = *ml.rbegin();
            ml.erase(prev(ml.end()));
            int c = (a + b + 1) / 2;
            ml.insert(c);

            v.push_back({a, b});
        }
        cout << *ml.begin() << endl;

        for (auto [a, b] : v)
        {
            cout << a << " " << b << endl;
        }
    }
    return 0;
}
