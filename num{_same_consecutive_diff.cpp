#include <bits/stdc++.h>
using namespace std;

bool f1(string s, int k){
    if(s[0]=='0') return false;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(abs(s[i]-s[i+1])!=k) return false;
    }
    return true;
    
}
vector<int> res;
void f(vector<char> &v, int ind, string ans, int k,int n){
    if(ans.size()==n){
        cout<<ans<<endl;
        // if(f1(ans,k)){
        //     int temp=stoi(ans);
        //     res.push_back(temp);
        // }
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(ans.size()==0 and v[i]=='0') continue;
        if(ans.size()>=1 and abs(ans[ans.size()-1]-v[i])!=k) continue;
        f(v,i+1,ans+v[i],k,n);
        // f(v,i+1,ans+v[i]);
    }
    // f(v,ind,ans+'0',k,n);
    // f(v,ind,ans+'1',k,n);
    // f(v,ind,ans+'2',k,n);
    // f(v,ind,ans+'3',k,n);
    // f(v,ind,ans+'4',k,n);
    // f(v,ind,ans+'5',k,n);
    // f(v,ind,ans+'6',k,n);
    // f(v,ind,ans+'7',k,n);
    // f(v,ind,ans+'8',k,n);
    // f(v,ind,ans+'9',k,n);
    
}

int main()
{
    vector<char> v={'0','1','2','3','4','5','6','7','8','9'};
    int k=7,n=3;
    f(v,0,"",k,n);
    // for(auto i:res) cout<<i<<" ";
    return 0;
}