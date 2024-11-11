#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int w,d,l;cin>>w>>d>>l;
     int rem = 4-(w+d+l);
     if(l>=w)w+=rem;
     if(w>l)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;

    return 0;
}
