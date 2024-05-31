#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &v, int target){
    int i=0,j=0;
    int sum=0;
    while(j<v.size()){
        sum+=v[j];
        while(sum>target){
            sum-=v[i];
            i++;
        }
        if(sum==target && j-i+1>1) return true;
        j++;
    }
    return false;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(auto &i:a){
            if(f(a,i)) ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}