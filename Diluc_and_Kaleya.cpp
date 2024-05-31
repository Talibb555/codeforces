#include <bits/stdc++.h>
using namespace std;

pair<int,int> f(int d, int k){
    if(d==0) return {0,1};
    if(k==0) return {1,0};
    return {d/__gcd(d,k),k/__gcd(d,k)};
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int d=0,k=0;
        map<pair<int,int>,int> m;
        for(int i=0;i<s.size();i++){
            if(s[i]=='D') d++;
            else k++;
            m[f(d,k)]++;
            cout<<m[f(d,k)]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}