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
     cin>>t;
     while(t--) {int a,b,c;
         cin>>a>>b>>c;
         if(a+b==c)cout<<"+"<<endl;
         else if(a-b==c)cout<<"-"<<endl;
     }
    return 0;
}
