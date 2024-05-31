#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int hsh[26]={0};
    int odd=0,flag=0;
    for (int i = 0; i < s.length(); i++)
    {
        hsh[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(hsh[i]&1) odd++;
        if(odd>1) {
            flag=1;
        }
    }
    if(odd<=1){
        cout<<"First"<<endl;
        return 0;
    }
    // if (flag==0)
    // {
    //     cout<<"First"<<endl;
    //     return 0;
    // }
    if(1&s.length()-1) cout<<"Second";
    else cout<<"First";
    return 0;
}