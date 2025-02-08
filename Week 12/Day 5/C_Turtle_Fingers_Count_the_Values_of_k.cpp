#include <bits/stdc++.h>

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
        int a, b, l;
        cin >> a >> b >> l;

        set<int> s;
        int x = 0;

        while (true)
        {
            if (int(pow(a, x)) > l)
                break;
            if (l % int(pow(a, x)) != 0)
                break;

            int cur = l / int(pow(a, x));
            s.insert(cur);

            while (cur % b == 0)
            {
                s.insert(cur / b);
                cur /= b;
            }
            x++;
        }
        cout << s.size() << endl;
    }
    return 0;
}
