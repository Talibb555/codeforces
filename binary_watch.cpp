#include <bits/stdc++.h>
using namespace std;

bool ishr(int pos){
    return (pos>=0 && pos<=3);
}

void solve(int arr[],int n, int ind, int k, int hrs, int mn, vector<string> &ans){
    if(k==0){
        if(hrs<=11 && mn<=59){
        // cout<<hrs<<" "<<mn<<endl;
        string s;
        s.append(to_string(hrs)).append(":").append(mn<=9 ? "0"+to_string(mn):to_string(mn));
        // cout<<s<<endl;
        ans.push_back(s);
        }
        return;
    }
    for (int i = ind; i < n; i++)
    {
        if(ishr(i)) hrs+=arr[i];
        else mn+=arr[i];
        solve(arr,n,i+1,k-1,hrs,mn,ans);
        if(i>=0 && i<=3) hrs-=arr[i];
        else mn-=arr[i];
    }
    
}

int main()
{
    int arr[]={1,2,4,8,1,2,4,8,16,32};
    int n=10;
    vector<string> s;
    solve(arr,n,0,2,0,0,s);
    for(auto i:s) cout<<i<<endl;
    return 0;
}