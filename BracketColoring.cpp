#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int color1=0,color2=0;
        stack<char> st1,st2;
        vector<int> ans;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(!st2.empty() && st2.top()==')'){
                    st2.pop();
                    ans.push_back(2);
                    color1++;
                } else {
                    st1.push('(');
                    ans.push_back(1);
                    color2++;
                }
            } else {
                if(!st1.empty() && st1.top()=='('){
                    st1.pop();
                    ans.push_back(1);
                    // color1++;
                } else {
                    st2.push(')');
                    ans.push_back(2);
                    // color2++;
                }
            }
        }
        if(st1.empty() and st2.empty()) {
            if(color1 and color2)
                cout<<2<<endl;
            else
                cout<<1<<endl;
            for(int i = 0 ; i < ans.size() ; i++) {
                if(color2 == 0 || color1 == 0)
                    cout<<1<<" ";
                else
                    cout<<ans[i]<<" ";
            }
        }
        else {
            cout<<-1;
        }
        cout<<endl;
    }   
    return 0;
}