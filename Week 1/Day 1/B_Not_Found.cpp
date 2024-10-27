#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    map<char,int>freq;
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]]++;
    }
    char ch;
    bool flag=false;
    for(char i='a';i<='z';i++)
    {
        if(freq[i]==0)
        {
            flag=true;
            ch=i;
            break;
        }

    }
    if(flag)
    {
        cout<<ch<<endl;
    }
    else cout<<"None"<<endl;
    return 0;
}
