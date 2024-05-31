#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int n;cin>>n;
    for(int i=2;i<=10000000;i++){
        if(isprime(i)){cout<<i<<" ";n--;}
        if(n==0) {cout<<endl;break;}
    }
    return 0;
}