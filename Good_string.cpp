#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        int ans=0;
        for(char i='0';i<='9';i++){
            for(char j='0';j<='9';j++){
                int x=0;
                for(int ind=0;ind<s.size();ind++){
                    if(x&1){
                        if(j==s[ind]) x++;
                    }
                    else{
                        if(i==s[ind]) x++;
                    }
                }
                if(i!=j){
                        if(x&1) x--;
                    }
                    ans=max(ans,x);
            }
        }
        cout<<s.size()-ans<<endl;
    }
    
    return 0;
}