#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, t;
    cin >> s >> t;
    int count = 0;

    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= (s-i- j); k++)
            {
                if (i * j * k <= t)
                    count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
