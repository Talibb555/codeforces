#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;

bool palin(string s){
    int start=0, end=s.size()-1;
    while (start<=end)
    {
        if(s[start]!=s[end]) return false;
        start++,end--;
    }
    return true;
}
int sum=0;
void f(string s, int ind, string ans1, string ans2){
    if(ind==s.size()){
        // if(palin(ans)) st.insert(ans);
        if(palin(ans1)&&palin(ans2)){
            cout<<ans1<<" "<<ans2<<endl;
            int t=ans1.size()*ans2.size();
            sum=max(sum,t);
        }
        return;
    }
    f(s,ind+1,ans1+s[ind],ans2);
    f(s,ind+1,ans1,ans2+s[ind]);
    f(s,ind+1,ans1,ans2);
}

int main()
{
    string s="accbcaxxcxx";
    f(s,0,"","");
    cout<<sum<<endl;
    // int flag=0;
    
    // for(auto i:st){
    //     for(auto j:st){
    //         for(int k=0;k<i.length();k++){
    //             flag=0;
    //             for(int l=0;l<j.length();l++){
    //                 if(i[k]==j[k]){
    //                     flag=1;
    //                     break;
    //                 }
    //             }
    //             if(flag) break;
    //         }
    //         if(flag){
    //             if(i.size()>j.size()) st.erase(j);
    //             else st.erase(i);
    //         }
    //     }
    // }
    // for(auto i:st) cout<<i<<endl;
    return 0;
}