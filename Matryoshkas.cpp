#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        map<int,int> m;
        set<int> st;

        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
            st.insert(a[i]);
            st.insert(a[i]+1);
        }
        int last=0, res=0;
        for(auto i:st){
            int cur = m[i];
            res+=max(0,cur-last);
            last=cur;
        }
        cout<<res<<endl;
    }
       
    return 0;
}