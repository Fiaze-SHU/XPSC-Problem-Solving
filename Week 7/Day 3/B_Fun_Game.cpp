#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;cin>>n;
        string s,t;
        cin>>s>>t;

        if(s==t || s[0]=='1')
        {
            cout<<"YES"<<endl;
        }
        else{
            int pos=-1;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    pos=i;
                    break;
                }
            }
            if(pos!=-1)
            {
                bool flag=true;
                for(int i=0;i<n;i++)
                {
                    if(s[i]!=t[i])
                    {

                        if(pos > i)
                        {
                            flag=false;
                            break;
                        }
                    }
                }
                if(flag)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
