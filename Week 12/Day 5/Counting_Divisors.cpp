#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

const int mxN = 1e6 + 7;
vector<int> divisor(mxN);

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= mxN; i++)
    {
        for (int j = i; j <= mxN; j += i)
        {
            divisor[j]++;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << divisor[n] << endl;
    }
    return 0;
}
