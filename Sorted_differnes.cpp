#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        vector<int> v(n);
        int l=0;
        int r=n-1;
        for(int i=n-1;i>=0;i--){
            if(i%2){
                v[i]=a[l];
                l++;
            }
            else {
                v[i]=a[r];
                r--;
            }
        }
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}