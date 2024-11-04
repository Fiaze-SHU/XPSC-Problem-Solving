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
     while(t--) {
         int n;cin>>n;
         string s,t;cin>>s>>t;
         bool flag=true;
         for(int i=0;i<n;i++)
         {
            if((s[i]=='R' && t[i]!='R')||(s[i]!='R' && t[i]=='R'))
            {
                flag=false;
                break;
            }
         }
         if(flag)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
    return 0;
}
