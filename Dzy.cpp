#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='-') continue;
            else{
                if((i+j)%2==0) s[j]='B';
                else s[j]='W';
            }
        }
        v.push_back(s);
    }
    for(int i=0;i<n;i++) cout<<v[i]<<endl;
    return 0;
}