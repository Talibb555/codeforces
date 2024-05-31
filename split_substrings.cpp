#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
int f(string &s, int ind, string ans){
    if(ind==s.length()){
        // cout<<ans<<endl;
        return 0;
    }
    // f(s,ind+1,ans+s[ind]);
    // f(s,ind+1,ans);
    int sum1=INT_MIN/2, sum2=INT_MIN/2;
    ans+=s[ind];
    if(st.find(ans)==st.end()){
        st.insert(ans);
        sum1=1+f(s,ind+1,"");
        st.erase(ans);
    }
    sum2=f(s,ind+1,ans);
    return max(sum1,sum2);
}
int f1(vector<int>& price, vector<vector<int>>& special, vector<int>& needs, int ind, int n){
        if(ind==special.size()){
            int cost=0;
            for(int i=0;i<n;i++){
                cost+=needs[i]*price[i];
            }
            return cost;
        }
        int take=1e8;
        int flag=1;
        for(int i=0;i<n;i++){
            if(needs[i]<special[ind][i]) {flag=0;break;}
        }
        if(flag){
            vector<int> temp;
            temp=needs;
            for(int i=0;i<n;i++){
                temp[i]-=special[ind][i];
            }
            take=special[ind][n]+f1(price,special,temp,ind,n);
        }
        int not_take=f1(price,special,needs,ind+1,n);
        return min(not_take,take);
    }

int main()
{
    string s="ababccc";
    // cout<<f(s,0,"");
    // for(auto i:st)cout<<i<<endl;
    vector<int> price={2,5};
    vector<int> needs={3,2};
    vector<vector<int>> special={{3,0,5},{1,2,10}};
    cout<<f1(price,special,needs,0,price.size());
    return 0;
}