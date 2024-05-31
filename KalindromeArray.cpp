#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int i=0, j=n-1;
        set<int> st;

        while(i<j){
            if(st.find(a[i])!=st.end()) {st.erase(st.find(a[i]));continue;}
            if(a[i]==a[j]){
                i++;j--;
            }
            else{
                st.insert(a[i]);
                i++;
            }
        }    
        if(st.size()==0){
            cout<<"YES"<<endl;
            continue;
        }

        i=0,j=n-1;
        st.clear();

        while(i<j){
            if(st.find(a[j])!=st.end()) {st.erase(st.find(a[j]));continue;}
            if(a[i]==a[j]){
                i++;j--;
            }
            else{
                st.insert(a[j]);
                j--;
            }
        }    
        if(st.size()==0){
            cout<<"YES"<<endl;
            continue;
        }

        cout<<"NO"<<endl;
    }
       
    return 0;
}