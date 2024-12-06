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
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        int rem = k % 2;
        int one=0;
        one = (k/2)*7;
        cnt += k / 2;
        if (rem == 1)
        {
            cnt++;
            one += 11;
        }
        n-=one;
        while(n>0)
        {
            n-=15;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
