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
        int l,r;
        cin>>l>>r;
       if(l>r/2)cout<<-1<<" "<<-1<<endl;
       else{
        cout<<r/2<<" "<<(r/2)*2<<endl;

       }
    }
    return 0;
}
