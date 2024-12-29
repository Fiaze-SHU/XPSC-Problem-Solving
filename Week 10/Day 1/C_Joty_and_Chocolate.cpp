#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, p, q , cnt = 0;
    cin >> n >> a >> b >> p >> q;
    int LCM = (a / __gcd(a, b)) * b;
     cnt += (n/a)*p;
        cnt += (n/b)*q;
    if(p>=q)
    {
       
        cnt -= (n/LCM)*q;
    }
    else
    {
        cnt -= (n/LCM)*p;
    }
    cout<<cnt<<endl;
    return 0;
}
