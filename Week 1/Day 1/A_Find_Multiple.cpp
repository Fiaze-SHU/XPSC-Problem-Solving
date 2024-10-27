#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int a,b,c;
     cin>>a>>b>>c;
     int flag=0;
     for(int i=a;i<=b;i++)
     {
        if(i%c==0)
        {
            flag=i;
            break;
        }
     }
     if(flag)
        {
            cout<<flag<<endl;
        }
        else cout<<-1<<endl;
    return 0;
}
