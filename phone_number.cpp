#include <bits/stdc++.h>
using namespace std;
const vector<string> m={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void solve(int ind,string t, string digits)
{
    if(ind==digits.size()){
        cout<<t<<endl;
        return;
    }
    for(auto i:m[digits[ind]-'0']){
        t.push_back(i);
        solve(ind+1,t,digits);
        t.pop_back();
    }
}

int main()
{
    string digits="";
    string t;
    solve(0,t,digits);
    return 0;
}