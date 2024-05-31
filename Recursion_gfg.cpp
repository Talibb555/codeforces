#include <bits/stdc++.h>
using namespace std;
bool isValid(string num)
{
    if (num.size() > 1 && num[0] == '0') return false;
    return true;
}
int val(string s, int pos)
{
    if(pos>=s.length()) return 0;
    return s[pos]-'0';
}

string addstring(string a, string b)
{
    string sum="";
    int i=a.length()-1;
    int j=b.length()-1;
    int carry=0;
    while (i>=0 || j>=0)
    {
        int t=val(a,i)+val(b,j)+carry;
        sum+=(t%10+'0');
        carry=t/10;
        i--,j--;
    }
    if(carry) sum+=(carry+'0');
    reverse(sum.begin(),sum.end());
    return sum;
}

bool solve(string a, string b, string c)
{
    if(!isValid(a)||!isValid(b)) return false;
    string sum=addstring(a,b);
    if(sum==c) return true;
    if(c.size()<=sum.size()||sum!=c.substr(0,sum.size())) return false;
    else return solve(b,sum,c.substr(sum.size()));
}

bool check(string num){
    int l=num.length();
    for (int i = 1; i <= l/2; i++)
    {
        for (int j = 1; j <= (l-i)/2; j++)
        {
            if(solve(num.substr(0,i),num.substr(i,j),num.substr(i+j))) return true;
        }   
    }
    return false;
}

int main()
{
    // string num="36276390153243396639103516742709438370921147518567300424860978651127260";
    // string a=num.substr(0,1);
    // string b=num.substr(a.size(),1);
    // string c=num.substr(a.size()+b.size());
    // cout<<c;
    // cout<<s.substr(a.size());
    // cout<<addstring(a,b);
    // cout<<solve(a,b,c);
    // cout<<check(num);
    // int l=num.length();
    // for (int i = 1; i <= l/2; i++)
    // {
    //     for (int j = 1; j <= (l-i)/2; j++)
    //     {
    //         if(solve(num.substr(0,i),num.substr(i,j),num.substr(i+j))) {cout<<1<<endl;return 0;}
    //     }
        
    // }
    // cout<<0<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<check(s)<<endl;
    }
    
    return 0;
}