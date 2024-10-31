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
        int f=0,g=0;
        for (int i = 1; i <= n; i++)
        {
           if(n%i==0)
           {
            if(i%2==0)f++;
            else g++;
           }
        }
        if(f>g)cout<<1<<endl;
        else if(g>f)cout<<-1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
