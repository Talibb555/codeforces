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
    string ans="";
    int sumA=0;
    int sumB=0;
    int diff=0;
    // if(v[0].first>=v[0].second){
    //     ans+='A';
    //     sum+=v[0].first;
    // }
    // else
    // {
    //     ans+='G';
    //     sum+=v[0].second;
    // }
    
    for (int i = 0; i < n; i++)
    {
        if(v[i].first+sumA<=500){
            ans+='A';
            sumA+=v[i].first;
            diff+=abs(sumA-sumB);
        }
        else
        {
            ans+='G';
            sumA-=v[i].second;
            diff+=abs(sumA-sumB);
        }
        
        
    }
    cout<<ans;
    return 0;
}