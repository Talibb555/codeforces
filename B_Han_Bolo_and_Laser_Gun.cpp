#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin>>n>>x>>y;
    set<double> st;
    int ct=0;
    for (int i = 0; i < n; i++)
    {
        double a,b;
        cin>>a>>b;
        double t;
        a-=x;
        b-=y;
        t=(b/a);
        if(a!=0) st.insert(b/a);
        else ct=1;
    }
    for(auto i: st) cout<<i<<" ";
    cout<<st.size()+ct;
    // double a=19999/19998.0;
    // double b=20000/19999.0;
    // cout<<a<<setprecision(20)<<" "<<b<<setprecision(20);
    
    return 0;
}