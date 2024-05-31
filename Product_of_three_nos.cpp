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
        unordered_set<int> st;
        for(int i=2;i*i<=n;i++){
            if(n%i==0 && st.find(i)==st.end()){
                n=n/i;
                st.insert(i);
                break;
            }
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0 && st.find(i)==st.end()){
                n=n/i;
                st.insert(i);
                break;
            }
        }
        if(st.size()<2 || st.find(n)!=st.end() || n==1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            st.insert(n);
            for(auto i:st) cout<<i<<" ";
            cout<<endl;
        }
    }

    return 0;
}