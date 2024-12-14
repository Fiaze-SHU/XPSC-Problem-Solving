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
        int n;cin>>n;
        string s;cin>>s;
        int cnt=0;
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(!st.empty() && st.top()!=s[i])
            {
                cnt++;
                st.pop();
            }
            else st.push(s[i]);
            
        }
        if(cnt%2!=0)cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
    return 0;
}
