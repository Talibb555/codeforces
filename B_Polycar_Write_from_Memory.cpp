#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hsh[26]={0};
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        hsh[s[i]-'a']++;
    }
    int ct=0;
    for (int i = 0; i < 26; i++)
    {
        cout<<hsh[i]<<" ";
        if(hsh[i]>0) ct++;
    }
    cout<<ct<<endl;
    
    return 0;
}