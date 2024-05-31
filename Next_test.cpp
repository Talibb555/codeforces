#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    unordered_set<int> st;
    int last=-1;
    for(int i=0;i<n;i++) {int x;cin>>x;last=x;st.insert(x);}
    for(int i=1;i<=3001;i++){
        if(!st.count(i)) {cout<<i<<endl;return 0;}
    }
    return 0;
}