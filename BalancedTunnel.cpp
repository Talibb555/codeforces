#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];   
    for(int i=0;i<n;i++) cin>>b[i];
    int i=0,j=0;
    while(j<n){
        if(a[i]==b[j]){
            j++;
            if(j<n) i++;
        }
        else{
            j++;
        }
    }   
    cout<<n-(i+1)<<endl;
    return 0;
}