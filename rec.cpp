#include <bits/stdc++.h>
using namespace std;

void f(int diff, string &s, int start, int end){
    if(abs(start-end)==1 && start>end){
        if(diff==0) cout<<s<<endl;
        return;
    }
    if(start==end){
        s[start]='1';
        if(diff==0) cout<<s<<endl;
        s[start]='0';
        if(diff==0) cout<<s<<endl;
        return ;
    }
    s[start]='0',s[end]='1';
    f(diff+1,s,start+1,end-1);
    s[start]=s[end]='0';
    f(diff,s,start+1,end-1);
    s[start]=s[end]='1';
    f(diff,s,start+1,end-1);
    s[start]='1',s[end]='0';
    f(diff-1,s,start+1,end-1);
}
int cnt = 0 ; 

set<string> st; 
void f1(string& s,int ind, int n, string s1){
    // string s1="";
    // cout<<s1<<endl;
    if(ind==n-1){
        // cnt++;
        s1+=s[n-1];
        cout<<s1<<endl;
        st.insert(s1);

       
        // char c = s1[s1.size()-1];
        // if(c!=' '){
        //     cout<<s1<<endl;
        //      st.insert(s1);

        // }
        
        return;
    }
    s1.push_back(s[ind]);
    s1.push_back(' ');
    f1(s,ind+1,n,s1);
    s1.pop_back();
    
    f1(s,ind+1,n,s1);
    


}

void f2(string s, int ind, string s1){
    if(ind==s.size()){
        cout<<s1<<endl;
        return;
    }
    f2(s,ind+1,s1);
    s1.push_back(s[ind]);
    f2(s,ind+1,s1);
    s1.pop_back();
}

int main()
{
    
    
    string s="abc";
    // cin>>s;
    string s1;
    int n=s.size();
    f1(s,0,n,s1);
    // for(auto i:st){
    //     cout<<i<<endl;
    // }
    // cout<<cnt<<endl;
    // s1.push_back(s[0]);
    // s.erase(s.begin()+0);
    // f1(s,s1);

    // cout<<st.size()<<endl;
    // f2(s,0,s1);
    return 0;
}