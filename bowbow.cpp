#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long n=s.size();
    long long ans=n/2;
    if(n%2==0){
        cout<<ans<<endl;
        return 0;
    }
    if(count(s.begin(),s.end(),'1')>1) ans++;
    cout<<ans<<endl;
    return 0;
}