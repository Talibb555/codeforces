#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int X=-(1 << 30) - 1;

        for(int i=0;i<n;i++){
            if(i==a[i]){}
            else X=X&a[i];
        }    
        cout<<X<<endl;
    }
    
    return 0;
}