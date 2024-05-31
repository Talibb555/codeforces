#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;

        vector<int> ans;
        for(int i=1;i<=n;i++){
            int ele = ((l-1)/i + 1)*i;
            if(ele<=r) ans.push_back(ele);
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
        if(ans.size()<n) continue;
        cout<<"YES"<<endl;
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
    }   
    return 0;
}