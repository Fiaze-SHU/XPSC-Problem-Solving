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
        cin>>n;
      string a,b,c;
      cin>>a>>b>>c;
      bool flag=true;
      for(int i=0;i<n;i++)
      {
        if(a[i]!=c[i] && b[i]!=c[i])
        {
            cout<<"YES"<<endl;
            flag=false;
            break;
        }
      }
      if(flag)cout<<"NO"<<endl;
    }
    return 0;
}
