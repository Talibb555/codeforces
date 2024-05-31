#include <bits/stdc++.h>
using namespace std;

bool rec(vector<int>& a, int ind, int last){
    if(ind==a.size()){
        if(last==0) return true;
        return false;
    }
    bool left=rec(a,ind+1,(last-a[ind]>=0)?last-a[ind]:360+last-a[ind]);
    bool right=rec(a,ind+1,(last+a[ind]>360)?last+a[ind]-360:last+a[ind]);
    return left|right;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(rec(a,0,0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}