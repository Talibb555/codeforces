#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int four=0,seven=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='4') four++;
        if(s[i]=='7') seven++;
    }
    if(four==0 && seven==0) cout<<-1;
    else if(four==seven) cout<<4;
    else if(four>seven) cout<<4;
    else if(four<seven) cout<<7;

    return 0;
}