#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        multiset<int> st;
        int sum=0;
        for(int i=0;i<n+2;i++){
            int a;
            cin>>a;
            st.insert(a);
        }
        auto x=*(--st.end());
        auto y=*(--(--st.end()));
        st.erase(--st.end());
        st.erase(--(--st.end()));
        // cout<<x<<" "<<y<<" ";
        for(auto i:st) sum+=i;
        sum-=x+y;
        // cout<<sum<<endl;
        int f=1;
        if(sum==y){
            f=0;
        }
        else if(sum!=y) {
            if(st.find(sum-y)!=st.end()){
                f=0;
                st.erase(st.find(sum-y));
            }
            else sum+=y;
        }
        if(f==0){
            for(auto i:st) cout<<i<<" ";
            cout<<endl;
            continue;
        }
        if(sum==x){
            f=0;
        }
        else if(sum!=x) {
            if(st.find(sum-x)!=st.end()){
                st.erase(st.find(sum-x));
                f=0;
            }
            else cout<<-1<<endl;
        }
        if(f==0){
            for(auto i:st) cout<<i<<" ";
            cout<<endl;
            continue;
        }

    }
    return 0;
}