#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(k);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>b[i];
    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());
    long long sum=0;
    for(int i=0;i<k;i++){
        if(b[i]==1) sum+=2*a[i];
        else sum+=a[i];
    }
    for(int i=k)
    
    return 0;
}