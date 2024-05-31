#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    int ct=0;
    bool a=false,b=false,c=false,d=false;
    // set<pair<int,int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((v[i].first)>v[j].first && v[i].second==v[j].second){
                // ct++;
                a=true;
                // cout<<v[j].first<<" "<<v[j].second<<endl;
                // s.insert(v[j]);
                // break;
            }
            if((v[i].first)<v[j].first && v[i].second==v[j].second){
                // ct++;
                b=true;
                // cout<<v[j].first<<" "<<v[j].second<<endl;
                // s.insert(v[j]);
                // break;
            }
            if((v[i].first)==v[j].first && v[i].second>v[j].second){
                // ct++;
                c=true;
                // cout<<v[j].first<<" "<<v[j].second<<endl;
                // s.insert(v[j]);
                // break;
            }
            if((v[i].first)==v[j].first && v[i].second<v[j].second){
                // ct++;
                d=true;
                // cout<<v[j].first<<" "<<v[j].second<<endl;
                // s.insert(v[j]);
                // break;
            }
        }
        if(a==true && b==true && c==true && d==true) ct++;
        a=b=c=d=false;
    }
    cout<<ct;
    // for(auto i:s){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    
    return 0;
}