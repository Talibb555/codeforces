#include <bits/stdc++.h>
using namespace std;

bool check_sqrt(int n){
    int sr=sqrt(n);
    return (sr*sr==n);
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if((check_sqrt(n/2) && n%2==0) || (check_sqrt(n/4) && n%4==0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}