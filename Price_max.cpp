#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n,k;cin>>n>>k;

        long long ans=0;
        multiset<int> st;
        vector<int> v;
        for(long long i=0;i<n;i++){
            long long a;cin>>a;
            ans+=a/k;
            a%=k;
            // if(a!=0) v.push_back(a);
            if(a!=0) st.insert(a);
        }
        auto it=st.begin();
        while(st.size()>1){
            auto it=st.lower_bound(k-*st.begin());
            if(it!=st.end()){
                // cout<<*it<<" "<<*st.begin()<<endl;
                ans++;
                st.erase(it);
            }
            st.erase(st.begin());
        }
        // auto it=st.begin();
        // while (st.size()>1)
        // {
        //     long long x=*it;
        //     auto ind=st.lower_bound(k-x);
        //     if( ind!=st.end()){
        //             if(ind!=st.end() ){
        //                 ans++;
        //                 st.erase(ind);
        //             }
        //         }else {
        //         // cout<<*it<<" "<<*ind<<endl;
        //         ans++;
        //         st.erase(ind);
        //         }
        //     }
        //     st.erase(it);
        //     it++;
        // }
        
        // sort(v.begin(),v.end());
        // for(long long i=0;i<n;i++){
        //     if(v[i]==-1) continue;
        //     auto ind=lower_bound(v.begin(),v.end(),k-v[i]);
        //     if(ind!=v.end()){
        //         ans++;
        //         // cout<<v[ind-v.begin()]<<" ";
        //         // v[ind-v.begin()]=-1;
        //         v.erase(v.begin(),ind);
        //     }
        // }
        // cout<<endl;
        cout<<ans<<endl;
    }
    
    return 0;
}