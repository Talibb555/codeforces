#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int countDigits(int n){
    int ans=0;
    while(n){
        ans++;
        n/=10;
    }
    return ans;
}

int CountTrailingZeros(int n){
    int ans=0;
    while(n){
        if(n%10==0){
            ans++;
            n/=10;
        }
        else break;
    }
    return ans;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int reqDigits=m+1;
        int totalDigits=0;
        vector<int> trailingZeros;
        for(int i=0;i<n;i++){
            totalDigits+=countDigits(a[i]);
            trailingZeros.push_back(CountTrailingZeros(a[i]));
        }
        sort(trailingZeros.rbegin(),trailingZeros.rend());
        for(int i=0;i<trailingZeros.size();i+=2){
            totalDigits-=trailingZeros[i];
        }
        if(totalDigits>=reqDigits) cout<<"Sasha"<<endl;
        else cout<<"Anna"<<endl;
    }   
    return 0;
}