#include <bits/stdc++.h>
using namespace std;

int dp[100][900][]

void rec(int m, int s, int ind, int sum, string num){
    if(ind==m){
        if(sum==s){
             cout<<num<<endl;
            }
        return ;
    }
    for(int i=0;i<=9;i++){
        num.push_back(i+'0');
        rec(m,s,ind+1,sum+i,num);
        num.pop_back();
    }
}

int main()
{
    int m,s;
    cin>>m>>s;
    string num;
    rec(m,s,0,0,num);
    return 0;
}