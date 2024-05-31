#include <bits/stdc++.h>
using namespace std;

bool checkDivisibility(string num) {
    int n = num.size();
    if (n >= 3) {
        int lastThreeDigits = (num[n - 3] - '0') * 100 + (num[n - 2] - '0') * 10 + (num[n - 1] - '0');
        if (lastThreeDigits % 8 == 0)
            return true;
    } else if (n == 2) {
        int lastTwoDigits = (num[n - 2] - '0') * 10 + (num[n - 1] - '0');
        if (lastTwoDigits % 8 == 0)
            return true;
    } else if (n == 1) {
        int lastDigit = num[n - 1] - '0';
        if (lastDigit % 8 == 0)
            return true;
    }

    return false;
}

void rec(string &s, int ind, string& a){
    // if(stoi(a)%8==0){cout<<a; return;}
    if(ind==s.size()){
        // cout<<a<<endl;
        if(checkDivisibility(a)){
            cout<<"YES"<<endl;
            cout<<a<<endl;
            exit(0);
        }
        
        return ;
    }
    a.push_back(s[ind]);
    rec(s,ind+1,a);
    a.pop_back();
    rec(s,ind+1,a);
    // return min(take,not_take);
}

int main()
{
    string s;
    cin>>s;
    string a;
    rec(s,0,a);
    cout<<"NO"<<endl;
    return 0;
}