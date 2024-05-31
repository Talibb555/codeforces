#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        vector<int> one,zero,a(n);
        int ct=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(one.size()==0){
                    ct++;
                    zero.push_back(ct);
                    a[i]=ct;
                }
                else{
                    int last=one.back();
                    one.pop_back();
                    zero.push_back(last);
                    a[i]=last;
                }
            }
            else{
                if(zero.size()==0){
                    ct++;
                    one.push_back(ct);
                    a[i]=ct;
                }
                else{
                    int last=zero.back();
                    zero.pop_back();
                    one.push_back(last);
                    a[i]=last;
                }
            }
        }
        cout<<ct+1<<endl;
        for(auto i:a) cout<<i+1<<" ";
        cout<<endl;
    }
    
    return 0;
}