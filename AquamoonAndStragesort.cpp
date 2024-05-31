#include <bits/stdc++.h>
using namespace std;
#define gok ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
# define fi first
# define se second
# define int long long
# define ll long long
#define pb push_back
# define inf 0x3f3f3f3f
const int N = 100005,mod = 1e9 + 7;

signed main() {
	gok
   //cout<<po(3,7)<<endl;
	int t;
	cin>>t;
	while(t--)
    {

       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
        cin>>a[i];

       int fr[2][100005]={0};

       for(int i=0;i<n;i++)
       {
            fr[i%2][a[i]]++;
       }

       sort(a,a+n);

       for(int i=0;i<n;i++)
       {
            fr[i%2][a[i]]--;
       }

       bool ch=true;

       for(int i=1;i<=100000;i++)
       {
           for(int j=0;j<2;j++)
           {
               if(fr[j][i]>0)
                ch=false;
           }
       }

        if(ch)
                cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;


    }




   return 0;
}