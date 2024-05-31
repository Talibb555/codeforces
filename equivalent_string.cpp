#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "leetcode", s2 = "programs", str="sourcecode";
    unordered_map<char, char> m;
    for (int i = 'a'; i <= 'z'; i++)
    {
        m[i]=i;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        char big=max(m[s1[i]],m[s2[i]]);
        char small=min(m[s1[i]],m[s2[i]]);
        // m[big]=small;
        // if(m[small]>='a' && m[small]<='z') m[big]=min(small,m[small]);
        for (char i = 'a'; i < 'z'+1; i++)
        {
            if(m[i]==big) m[i]=small;
        }
        
    }
    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
    for (int i = 0; i < str.size(); i++)
    {
        str[i]=m[str[i]];
    }
    
    cout<<str<<endl;
    

    return 0;
}