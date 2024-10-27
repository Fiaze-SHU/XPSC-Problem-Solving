#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int a,b;cin>>a>>b;
     if(a==b)cout<<a+b<<endl;
     else{
        int c=max(a,b);
        cout<<(2*c)-1<<endl;
     }
    return 0;
}
