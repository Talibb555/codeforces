#include <bits/stdc++.h>
using namespace std;

// bool check(vector<string> ds, vector<int> ds1)
// {
//     for (int i = 0; i < ds1.size() - 1; i++)
//     {
//         if (ds1[i] <= ds1[i + 1] || ds1[i] - ds1[i + 1] != 1)
//             return false;
//     }
//     return true;
// }
void f(string &s, int ind, vector<string> &ds, vector<int> &ds1, int prev)
{
    if (ind == s.size())
    {
        for(auto i:ds) cout<<i<<" ";
        cout<<endl;
        // for(auto i:ds1) cout<<i<<" ";
        // cout<<endl;
        // if (check(ds, ds1) && ds.size() > 1)
        {
            // for(auto i:ds) cout<<i<<" ";
            // cout<<endl;
            // for(auto i:ds1) cout<<i<<" ";
            // cout<<endl;
            // return true;
        }
        return ;
    }
    // int num = 0;
    // int prev = stoul(s.substr(0,1));
    for (int i = ind; i < s.size(); i++)
    {
        
        // if ((prev - cur == 1) || prev==-1)
        {
            // prev=cur;
            // num = num * 10 + s[i] - '0';
            // ds1.push_back(num);
            ds.push_back(s.substr(ind, i - ind + 1));
            (f(s, i + 1, ds, ds1, prev));
            // if (f(s, i + 1, ds, ds1, prev))
            //     return true;
            // ds1.pop_back();
            ds.pop_back();
        }
        // int cur = stoul(ds[i]);
        // cout<<cur<<endl;
    }
    // return false;
}

// bool solve(string s, int ind, double parent){
//     if(s.size()==0){
//         return true;
//     }
//     double cur=0;
//     for (int i = ind; i < s.size(); i++)
//     {
//         cur=cur*10+s[i]-'0';
//         if(i!=s.length()-1 && (parent==-1 || parent-cur==1)){
//             if(solve(s.substr(ind,i-ind+1),i+1,cur)) return true;
//         }
//     }
//     return false;
// }

// bool f1(string s, long parent){
//     if(s.size()==0){
//         return true;
//     }
//     long current=0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         current=current*10+s[i]-'0';
//         cout<<current<<endl;
//         if((i!=s.length()-1 && parent==-1 || parent-current==1) && f1(s.substr(i+1),current)) return true;
//     }
//     return false;
// }
void f1(string s, long parent){
    if(s.size()==0){
        return ;
    }
    long current=0;
    for (int i = 0; i < s.length(); i++)
    {
        current=current*10+s[i]-'0';
        cout<<current<<endl;
        // if((i!=s.length()-1 && parent==-1 || parent-current==1) && f1(s.substr(i+1),current)) return true;
        f1(s.substr(i+1),current);
    }
    // return false;
}

// void f2(string s, vector<string> ans){
//     if(s.size()==0) {
//         // for(auto i:ans) cout<<i<<" ";
//         // cout<<endl;
//         return;
//     }
//     // cout<<s<<endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout<<s<<endl;
//         ans.push_back(s);
//         f2(s.substr(i+1),ans);
//         ans.pop_back();
//     }
    
// }

int main()
{
    string s = "4321";
    // string s="1234";
    // string s="64424509442147483647";
    vector<string> ds;
    vector<int> ds1;
    // f(s, 0, ds, ds1,-1);
    vector<string> ans;
    f1(s,-1);
    // cout<<f1(s,-1);
    // f2(s,ans);
    
    // cout<<stoul("007");
    // cout<<solve(s,0,-1);
    return 0;
}