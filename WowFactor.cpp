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
    string s;cin>>s;
    long long a=0,b=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='o') b+=a;
        else if(i+1<s.size() && s[i+1]=='v'){
            a++;
            c+=b;
        }
    }   
    cout<<c<<endl;
    return 0;
}