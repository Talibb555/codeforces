#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> pos(n,0), neg(n,0);
    if(a[0]<0) neg[0]=1;
    else pos[0]=1;

    for(int i=1;i<n;i++){
        if(a[i]<0){
            neg[i]=1+pos[i-1];
            pos[i]=neg[i-1];
        } else {
            neg[i]=neg[i-1];
            pos[i]=1+pos[i-1];
        }
    }

    cout<<accumulate(neg.begin(),neg.end(),0LL)<<" "<<accumulate(pos.begin(),pos.end(),0LL);

    return 0;
}