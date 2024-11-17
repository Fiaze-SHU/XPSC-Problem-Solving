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
         int n;
             cin>>n;
            string s;cin>>s;

            int one=0,zero=0;

            char x=s[0];

            if(x=='1')one++;
            else zero++;
        

            for(int i=1;i<n;i++)
            {
                if(x!=s[i])
                {
                    x=s[i];
                    if(x=='1')one++;
            else zero++;
                }


            }
            cout<<min(one,zero)<<endl;
     }
    return 0;
}
