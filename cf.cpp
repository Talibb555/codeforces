#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int ind){
    if(ind==s.length()-1){
        // cout<<s<<endl;
        return;
    }
    if(s[ind]=='a' && s[ind+1]!='b') s[ind+1]='a';
    solve(s,ind+1); 
}
void solve1(string &s, int ind){
    if(ind==1){
        // cout<<s<<endl;
        return;
    }
    if(s[ind]=='a' && s[ind-1]!='b') s[ind-1]='a';
    solve1(s,ind-1); 
}
int f(string s, int start, int end, int k){
    if(end-start<k) {
        
        return 0;
        }
    int freq[26]={0};
    for (int i = start; i < end; i++) freq[s[i]-'a']++;
    for (int i = start; i < end; i++)
    {
        if(freq[s[i]-'a']<k){
            int j=i+1;
            while (j<end && freq[s[j]-'a']<k)
            {
                j++;
            }
            return max(f(s,j,end,k),f(s,start,i,k));
            // return f(s,start,i,k);
        }
    }
    for (int i = start; i < end; i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    return end-start;
    
}

int main()
{
    // int n;
    // cin>>n;
    // string s;
    // cin>>s;
    // solve(s,0);
    // solve1(s,s.length()-1);
    // cout<<count(s.begin(),s.end(),'a');
    // return 0;
    int k=3;
    string s="bbaaacbd";
    cout<<f(s,0,s.length(),k);

}