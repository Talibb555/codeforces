#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=n/4;
    string s="abcd";
    while (r--)
    {
        cout<<s;
    }
    for (int i = 0; i < n%4; i++)
    {
        cout<<s[i];
    }
    
    return 0;
}