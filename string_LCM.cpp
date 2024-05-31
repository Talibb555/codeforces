#include <bits/stdc++.h>
using namespace std;

string mul(string &s, int n){
    string res="";
    while(n--){
        res+=s;
    }
    return res;
} 

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,g;
        cin>>s>>g;
        int n=s.size();
        int m=g.size();
        int gcd=__gcd(n,m);
        if(mul(s,m/gcd)==mul(g,n/gcd)) cout<<mul(g,n/gcd)<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}