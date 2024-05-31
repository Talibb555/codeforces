#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string g=s;
    reverse(g.begin(),g.end());
    cout<<s+g<<endl;
    return 0;
}