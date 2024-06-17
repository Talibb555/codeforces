#include <iostream>
#include <string>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    string s;
    cin >> s;

    long long plus = 0, minus = 0;
    for (char c : s) {
        if (c == '+') plus++;
        else minus++;
    }

    long long q;
    cin >> q;
    while (q--) {
        long long a, b;
        cin >> a >> b;

        long long n1=min(a,b)*max(plus,minus);
        long long n2=max(a,b)*min(plus,minus);
        long long diff=n2-n1;
        if(plus==minus){cout<<"YES"<<endl;continue;}
        if(diff==0){cout<<"YES"<<endl;continue;}
        if(diff>0 && diff%abs(a-b)==0){cout<<"YES"<<endl;continue;}
        else cout<<"NO"<<endl;
    }
}

int main() {
    solve();
    return 0;
}
