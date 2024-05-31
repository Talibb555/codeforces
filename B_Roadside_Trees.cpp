#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int eat=n;
    int jump=n-1;
    int climb=a[0];
    for (int i = 0; i < n-1; i++)
    {
        climb+=abs(a[i]-a[i+1]);
    }
    // cout<<eat<<" "<<jump<<" "<<climb;
    cout<<eat+jump+climb;
    
    return 0;
}