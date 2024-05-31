#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long i=1;
        long long sum=0;
        long long rem=0;
        while(n>0){
            rem=n%9;
            sum+=rem*i;
            n=n/9;
            i*=10;
        }
        string s=to_string(sum);
        for(int j=0;j<s.size();j++){
            if(s[j]>'3') s[j]=char(s[j]+1);
            cout<<(s[j]-'0');
        }
        cout<<endl;
        // long long int n=atoll(s);
        // cout<<n;
        // cout<<s;

    }
    
    return 0;
}