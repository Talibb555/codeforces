#include <bits/stdc++.h>
using namespace std;

int bs(string &s, int lo, char target){
    int hi=s.size()-2;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(s[mid]==target && s[mid]==s[mid+1]){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(int i=1;i<n;i++){
            if(s[i]=='0' && s[i-1]=='0'){
                int x=bs(s,i+1,'1');
                reverse(s.begin()+i,s.begin()+x+1);
                ans++;
            }
            if(s[i]=='1' && s[i-1]=='1'){
                int x=bs(s,i+1,'0');
                reverse(s.begin()+i,s.begin()+x+1);
                ans++;
            }
        }
        cout<<s<<endl;
        cout<<ans<<endl;
    }
    
    return 0;
}