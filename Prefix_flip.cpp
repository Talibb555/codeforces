#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                if(i>0) v.push_back(i+1);
                v.push_back(1);
                if(i>0) v.push_back(i+1);
            }
        }
        cout<<v.size()<<" ";
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}