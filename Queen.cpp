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
    set<int> notRespect, canNotBeDeleted;
    for(int i=1;i<=n;i++){
        int p,c;
        cin>>p>>c;
        if(c==0) canNotBeDeleted.insert(p);
        else notRespect.insert(i);
    }   
    bool ok=true;
    for(auto i:notRespect){
        if(canNotBeDeleted.count(i)==0){ok=false; cout<<i<<" ";}
    }
    if(ok) cout<<-1<<endl;
    cout<<endl;
    return 0;
}