#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    double week=n-k+1;
    long long sum=0;
    long long total=0;
    for(int i=0;i<week;i++) sum+=a[i];
    total+=sum;
    for(int i=week;i<n;i++){
        sum-=a[i-week];
        sum+=a[i];
        total+=sum;
    }   
    cout<<fixed<<setprecision(10)<<((double)(total)/week);
    return 0;
}