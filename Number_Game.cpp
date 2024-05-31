#include <bits/stdc++.h>
using namespace std;
const int N=50000;
bool check_prime(int n){
    for(int i=2;i<min(n,N);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int f=0;
        if(n==1) f=1;
        else{
            if(n>2&&n%2==0){
                if((n&(n-1))==0) f=1;
                else if(n%4!=0 && check_prime(n/2)) f=1;
            }
        }
        if(f==1) cout<<"FastestFinger"<<endl;
        else cout<<"Ashishgup"<<endl;
    }
    
    return 0;
}